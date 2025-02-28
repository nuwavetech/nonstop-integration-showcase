"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Transaction view functionality
 */
NSIS.views.transaction = {
  /**
   * Initialize the transaction view
   */
  init: function() {
    $("#void-payment-confirmed").on("click", () => {
      NSIS.views.transaction.voidPayment();
      $("#void-payment-modal").modal("hide");
    });
  },

  /**
   * Render the transaction view
   * @param {string} path - URL path
   */
  render: async function(path) {
    /* Split the path. */
    let segments;
    try {
      segments = path.split("/");
    } catch (e) {
      NSIS.utils.go("transactions");
      NSIS.utils.raiseAlert("error", "Invalid transaction path");
      return;
    }

    let transaction = segments[2];

    let response = await NSIS.api.doApiRequest(
        {method : "GET", uri : "/paysim/transaction/" + transaction});

    if (response.status !== 200) {
      NSIS.utils.raiseAlert("error", response.json.errorMessage);
      NSIS.utils.go("transactions");
      return;
    }

    let tx = response.json;

    $("#transaction-view #transactionId").text(tx.transactionId);
    $("#transaction-view #date").text(new Date(tx.timestamp).toLocaleString());
    $("#transaction-view #type").text(NSIS.utils.transactionTypeToString(tx));
    $("#transaction-view #responseCode").text(NSIS.utils.responseCodeToString(tx.paymentResponseCode));
    $("#transaction-view #cardNumber").text(tx.paymentDetail.cardNumber);
    $("#transaction-view #amount").text(NSIS.utils.formatCurrency(tx.paymentDetail.amount));
    $("#transaction-view #merchantName").text(tx.paymentDetail.merchantName);
    $("#transaction-view #cardNumber").text(NSIS.utils.maskCardNumber(tx.paymentDetail.cardNumber));
    $("#transaction-view #nameOnCard").text(tx.paymentDetail.nameOnCard);
    $("#transaction-view #exp").text(tx.paymentDetail.expMonth + " / " + tx.paymentDetail.expYear);
    $("#transaction-view #securityCode").text(tx.paymentDetail.securityCode);

    let el = $("#transaction-view #relatedTransactionId");
    el.removeData("href");
    el.removeAttr("data-href");
    if (tx.relatedTransactionId.length > 0) {
      el.text(tx.relatedTransactionId);
      el.attr("data-href", "./#/transaction/" + tx.relatedTransactionId);
      el.on("click", function () {
        window.location = $(this).data("href");
      });
    } else {
      el.text("<none>");
    }

    if (tx.transactionType === 1 && tx.relatedTransactionId.length === 0 && tx.paymentResponseCode == "00") {
      $("#transaction-view #void-payment-button").show();
    } else {
      $("#transaction-view #void-payment-button").hide();
    }

    NSIS.utils.enableView("transaction");
  },

  /**
   * Void a payment
   */
  voidPayment: async function() {
    let transactionId = $("#transaction-view #transactionId").text();

    let request = {
      method : "POST",
      uri : "/paysim/payment/" + transactionId + "/void"
    };

    let response = await NSIS.api.doApiRequest(request);

    if (response.status !== 200) {
      NSIS.utils.raiseAlert("error", response.json.errorMessage);
      return;
    }

    NSIS.utils.raiseAlert("success", "Transaction " + transactionId + " has been voided.");

    NSIS.utils.go("/transaction/" + response.json.transactionId);
  }
};