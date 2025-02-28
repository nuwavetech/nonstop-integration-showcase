"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Account view functionality
 */
NSIS.views.account = {
  /**
   * Initialize the account view
   */
  init: function() {
    $("#account-view form").on("submit", (e) => {
      e.preventDefault();
      NSIS.views.account.saveAccount();
    });

    $("#delete-account-confirmed").on("click", () => {
      NSIS.views.account.deleteAccount();
      $("#delete-account-modal").modal("hide");
    });
  },

  /**
   * Render the account view
   * @param {string} path - URL path
   */
  render: async function(path) {
    /* Split the path. */
    let segments;
    try {
      segments = path.split("/");
    } catch (e) {
      NSIS.utils.go("accounts");
      NSIS.utils.raiseAlert("error", "Invalid account path");
      return;
    }

    /* The account number is the second segment in the path. If there isn't one,
    then this is a create request. */
    let accountNumber = segments[2];

    if (typeof accountNumber === "undefined") {
      /* Setup the create account header, clear the form fields, and hide the delete button and card list. */
      $("#account-view #header").text("Create Account");
      $("#account-view :input").val("");
      $("#delete-account-button").hide();
      $("#account-view #account-cards").hide();
    } else {
      /* Set the header and turn on the delete button and card list. */
      $("#account-view #header").text("Account " + accountNumber);
      $("#delete-account-button").show();
      $("#account-view #account-cards").show();

      /* Load the account into the form. */
      let accountRequest = {
        method : "GET",
        uri : "/paysim/account/" + accountNumber
      };
      let cardRequest = {
        method : "GET",
        uri : "/paysim/cards?account-number=" + accountNumber
      };
      let [accountResponse, cardsResponse] = await Promise.all([NSIS.api.doApiRequest(accountRequest), NSIS.api.doApiRequest(cardRequest)]);

      if (accountResponse.status !== 200 || cardsResponse.status != 200) {
        NSIS.utils.raiseAlert("error", "Unable to load the account.");
        NSIS.utils.go("accounts");
        return;
      }

      let account = accountResponse.json;
      let cards = cardsResponse.json;

      $("#account-view #accountNumber").val(account.accountNumber);
      $("#account-view #firstName").val(account.accountDetail.firstName);
      $("#account-view #lastName").val(account.accountDetail.lastName);
      $("#account-view #address1").val(account.accountDetail.address1);
      $("#account-view #address2").val(account.accountDetail.address2);
      $("#account-view #city").val(account.accountDetail.city);
      $("#account-view #state").val(account.accountDetail.state);
      $("#account-view #postalCode").val(account.accountDetail.postalCode);
      $("#account-view #email").val(account.accountDetail.emailAddress);
      $("#account-view #phone").val(account.accountDetail.phoneNumber);

      let tbody = $("#account-view #account-cards > tbody");
      tbody.empty();

      if (cards.cards.length === 0) {
        tbody.append("<tr><td colspan=\"6\">There are no cards associated with this account.</td></tr>");
      } else {
        cards.cards.forEach((item) => {
          let row = NSIS.utils.getTemplate("#account-cards-row-template");

          $("td:nth-child(1)", row).text(item.cardNumber);
          $("td:nth-child(2)", row).text(item.cardDetail.nameOnCard);
          $("td:nth-child(3)", row).text(NSIS.utils.formatCurrency(item.cardDetail.balance));
          $("td:nth-child(4)", row).text(NSIS.utils.formatCurrency(item.cardDetail.spendingLimit));
          $("td:nth-child(5)", row).text(NSIS.utils.formatCurrency(item.cardDetail.alertLimit));
          $("td:nth-child(6)", row).text(item.cardDetail.isLocked);

          row.attr("data-href", "./#/card/" + item.cardNumber);
          tbody.append(row);
        });
      }

      $("#account-view #account-cards [data-href]").on("click", function () {
        window.location = $(this).data("href");
      });
    }

    NSIS.utils.enableView("account");
  },

  /**
   * Save the account
   */
  saveAccount: async function() {
    let json = {};
    let accountNumber = $("#account-view #accountNumber").val();
    let isUpdate = false;

    if (typeof accountNumber !== "undefined" && accountNumber.length > 0) {
      json.accountNumber = accountNumber;
      isUpdate = true;
    }

    json.accountDetail = {};
    json.accountDetail.firstName = $("#account-view #firstName").val();
    json.accountDetail.lastName = $("#account-view #lastName").val();
    json.accountDetail.address1 = $("#account-view #address1").val();
    json.accountDetail.address2 = $("#account-view #address2").val();
    json.accountDetail.city = $("#account-view #city").val();
    json.accountDetail.state = $("#account-view #state").val();
    json.accountDetail.postalCode = $("#account-view #postalCode").val();
    json.accountDetail.emailAddress = $("#account-view #email").val();
    json.accountDetail.phoneNumber = $("#account-view #phone").val();

    let request = {
      method : (isUpdate ? "PUT" : "POST"),
      uri : "/paysim/account",
      json : json
    };
    if (isUpdate) {
      request.uri += "/" + accountNumber;
    }

    let response = await NSIS.api.doApiRequest(request);

    if (response.status !== 200 && response.status !== 201) {
      NSIS.utils.raiseAlert("error", response.json.errorMessage);
      return;
    }

    let account = response.json;

    NSIS.utils.raiseAlert("success", "Account " + account.accountNumber + " has been " + (isUpdate ? "updated." : "created."));
    NSIS.views.account.render("/account/" + account.accountNumber);
  },

  /**
   * Delete the account
   */
  deleteAccount: async function() {
    let accountNumber = $("#account-view #accountNumber").val();

    let response = await NSIS.api.doApiRequest(
        {method : "DELETE", uri : "/paysim/account/" + accountNumber});

    if (response.status !== 204) {
      NSIS.utils.raiseAlert("error", response.json.errorMessage);
      NSIS.utils.go("accounts");
      return;
    }

    NSIS.utils.raiseAlert("success", "Account " + accountNumber + " has been deleted.");
    NSIS.utils.go("accounts");
  }
};