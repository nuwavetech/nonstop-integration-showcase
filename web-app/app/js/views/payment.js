"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Payment view functionality
 */
NSIS.views.payment = {
  /**
   * Initialize the payment view
   */
  init : function() {
    $("#payment-view form").on("submit", (e) => {
      e.preventDefault();
      NSIS.views.payment.submitPayment();
    });

    $("#clear-payment-button").on("click", () => {
      NSIS.views.payment.clearPaymentForm();
    });

    // Configure jQuery Autocomplete for card number field
    $("#payment-view #cardNumber").autocomplete({});

    $("#payment-view #cardNumber").on("autocompleteselect", function (event, ui) {
      NSIS.views.payment.onPaymentCardSelected(ui);
    });
  },

  /**
   * Render the payment terminal view
   */
  render : async function() {
    /* Populate the card number autocomplete with cards. */
    let response =
        await NSIS.api.doApiRequest({method : "GET", uri : "/paysim/cards"});
    let cards = response.json.cards.map((item) => {
      return { label: item.cardNumber + " - " + item.cardDetail.nameOnCard, value: item.cardNumber };
    });
    $("#payment-view #cardNumber").autocomplete("option", "source", cards);

    NSIS.utils.enableView("payment");
  },

  /**
   * Clear the payment form
   */
  clearPaymentForm : function() {
    $("#payment-form").find("input[type=text], select").val("");
  },

  /**
   * Handle card selection in autocomplete
   * @param {object} selected - Selected card object
   */
  onPaymentCardSelected : async function(selected) {
    let response = await NSIS.api.doApiRequest(
        {method : "GET", uri : "/paysim/card/" + selected.item.value});

    $("#payment-view #cardNumber").val(response.json.cardNumber);
    $("#payment-view #nameOnCard").val(response.json.cardDetail.nameOnCard);
    $("#payment-view #expMonth").val(response.json.cardDetail.expMonth);
    $("#payment-view #expYear").val(response.json.cardDetail.expYear);
    $("#payment-view #securityCode").val(response.json.cardDetail.securityCode);
  },

  /**
   * Submit a payment
   */
  submitPayment : async function() {
    let json = {};

    json.cardNumber = $("#payment-view #cardNumber").val();
    json.nameOnCard = $("#payment-view #nameOnCard").val();
    json.expMonth = $("#payment-view #expMonth").val();
    json.expYear = $("#payment-view #expYear").val();
    json.securityCode = $("#payment-view #securityCode").val();
    json.amount = NSIS.utils.parseCurrency($("#payment-view #amount").val());
    json.merchantName = $("#payment-view #merchantName").val();

    let request = {method : "POST", uri : "/paysim/payment", json : json};

    let response = await NSIS.api.doApiRequest(request);

    if (response.status !== 201) {
      NSIS.utils.raiseAlert("error", "Declined: " + NSIS.utils.responseCodeToString(response.json.paymentResponseCode));
      return;
    }

    NSIS.utils.raiseAlert("success", "Payment completed");

    NSIS.views.payment.clearPaymentForm();

    NSIS.utils.go("/transaction/" + response.json.transactionId);
  }
};