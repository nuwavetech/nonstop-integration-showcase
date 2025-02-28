"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Card view functionality
 */
NSIS.views.card = {
  /**
   * Initialize the card view
   */
  init: function() {
    $("#card-view form").on("submit", (e) => {
      e.preventDefault();
      NSIS.views.card.saveCard();
    });

    $("#delete-card-confirmed").on("click", () => {
      NSIS.views.card.deleteCard();
      $("#delete-card-modal").modal("hide");
    });
  },

  /**
   * Render the card view
   * @param {string} path - URL path
   */
  render: async function(path) {
    /* Split the path. */
    let segments;
    try {
      segments = path.split("/");
    } catch (e) {
      NSIS.utils.go("cards");
      NSIS.utils.raiseAlert("error", "Invalid card path");
      return;
    }

    /* The card number is the second segment in the path. If there isn't one,
    then this is a create request. */
    let cardNumber = segments[2];

    /* Populate the account select list. */
    let response =
        await NSIS.api.doApiRequest({method : "GET", uri : "/paysim/accounts"});

    if (response.status !== 200) {
      NSIS.utils.raiseAlert("error", "Unable to retrieve the accounts list.");
      NSIS.utils.go("cards");
      return;
    }

    let accounts = response.json.accounts;

    let select = $("#card-view #accountNumber");
    select.empty();
    select.append("<option value=\"\">- select an account -</option>");
    accounts.forEach((item) => {
      let o = "<option value=\"" + item.accountNumber + "\">"
      o += item.accountNumber + " - " + item.accountDetail.firstName + " " + item.accountDetail.lastName;
      o += "</option>";
      select.append(o);
    });

    if (typeof cardNumber === "undefined") {
      /* Setup the create account header, clear the form fields, and hide the delete button. */
      $("#card-view #header").text("Create Card");
      $("#card-view :input").val("");
      $("#delete-card-button").hide();
      $("#card-view #form-balance").hide();
    } else {
      /* Set the header and turn on the delete button. */
      $("#card-view #header").text("Card " + cardNumber);
      $("#delete-card-button").show();
      $("#card-view #form-balance").show();

      /* Load the account into the form. */
      let response = await NSIS.api.doApiRequest(
          {method : "GET", uri : "/paysim/card/" + cardNumber});

      if (response.status !== 200) {
        NSIS.utils.raiseAlert("error", response.json.errorMessage);
        NSIS.utils.go("cards");
        return;
      }

      let card = response.json;

      $("#card-view #cardNumber").val(card.cardNumber);
      $("#card-view #nameOnCard").val(card.cardDetail.nameOnCard);
      $("#card-view #accountNumber").val(card.cardDetail.accountNumber);
      $("#card-view #expMonth").val(card.cardDetail.expMonth);
      $("#card-view #expYear").val(card.cardDetail.expYear);
      $("#card-view #securityCode").val(card.cardDetail.securityCode);
      $("#card-view #balance").val(NSIS.utils.formatCurrency(card.cardDetail.balance));
      $("#card-view #spendingLimit").val(NSIS.utils.formatCurrency(card.cardDetail.spendingLimit));
      $("#card-view #alertLimit").val(NSIS.utils.formatCurrency(card.cardDetail.alertLimit));
      $("#card-view #isLocked").attr("checked", card.cardDetail.isLocked);
    }

    NSIS.utils.enableView("card");
  },

  /**
   * Save the card
   */
  saveCard: async function() {
    let json = {};
    let cardNumber = $("#card-view #cardNumber").val();
    let isUpdate = false;

    if (typeof cardNumber !== "undefined" && cardNumber.length > 0) {
      json.cardNumber = cardNumber;
      isUpdate = true;
    }

    json.cardDetail = {};
    json.cardDetail.nameOnCard = $("#card-view #nameOnCard").val();
    json.cardDetail.accountNumber = $("#card-view #accountNumber").val();
    json.cardDetail.expMonth = $("#card-view #expMonth").val();
    json.cardDetail.expYear = $("#card-view #expYear").val();
    json.cardDetail.securityCode = $("#card-view #securityCode").val();
    json.cardDetail.balance = NSIS.utils.parseCurrency($("#card-view #balance").val());
    json.cardDetail.spendingLimit = NSIS.utils.parseCurrency($("#card-view #spendingLimit").val());
    json.cardDetail.alertLimit = NSIS.utils.parseCurrency($("#card-view #alertLimit").val());
    json.cardDetail.isLocked = $("#card-view #isLocked").prop("checked");

    let request = {
      method : (isUpdate ? "PUT" : "POST"),
      uri : "/paysim/card",
      json : json
    };
    if (isUpdate) {
      request.uri += "/" + cardNumber;
    }

    let response = await NSIS.api.doApiRequest(request);

    if (response.status !== 200 && response.status !== 201) {
      NSIS.utils.raiseAlert("error", response.json.errorMessage);
      return;
    }

    let card = response.json;

    NSIS.utils.raiseAlert("success", "Card " + card.cardNumber + " has been " + (isUpdate ? "updated." : "created."));
    NSIS.views.card.render("/card/" + card.cardNumber);
  },

  /**
   * Delete the card
   */
  deleteCard: async function() {
    let cardNumber = $("#card-view #cardNumber").val();

    let response = await NSIS.api.doApiRequest(
        {method : "DELETE", uri : "/paysim/card/" + cardNumber});

    if (response.status !== 204) {
      NSIS.utils.raiseAlert("error", response.json.errorMessage);
      NSIS.utils.go("cards");
      return;
    }

    NSIS.utils.raiseAlert("success", "Card " + cardNumber + " has been deleted.");
    NSIS.utils.go("cards");
  }
};