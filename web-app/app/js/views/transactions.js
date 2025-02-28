"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Transactions view functionality
 */
NSIS.views.transactions = {
  /**
   * Initialize the transactions view
   */
  init : function() {
    // No specific initialization needed
  },

  /**
   * Render the transactions view
   */
  render : async function() {
    let response = await NSIS.api.doApiRequest(
        {method : "GET", uri : "/paysim/transactions"});

    if (response.status !== 200) {
      NSIS.utils.raiseAlert("error", "An error occurred while trying to retrieve the transaction list");
      NSIS.utils.go("cards");
      return;
    }

    let transactions = response.json.transactions;

    /*
    * In order to use jQuery DataTable without getting too complicated, we completely rebuild the
    * table every time. DataTable cannot deal with a DOM table that changes dynamically. Using a DataTable
    * data source would work well, but we're trying to keep things simple.
    */
    $("#transactions-table_wrapper").remove();
    $("#transactions-table").remove();
    let table = NSIS.utils.getTemplate("#transactions-table-template");
    table.attr("id", "transactions-table");
    $("#transaction-table-container").append(table);

    let tbody = $("tbody", table);

    if (transactions.length === 0) {
      tbody.append(NSIS.utils.getTemplate("#transactions-log-empty-template"));
      NSIS.utils.enableView("transactions");
      return;
    }

    transactions.forEach((item) => {
      let row = NSIS.utils.getTemplate("#transactions-table-row-template");

      $("td:nth-of-type(1)", row).text(NSIS.utils.formatDateTime(item.timestamp));
      $("td:nth-of-type(2)", row).text((item.transactionId));
      $("td:nth-of-type(3)", row).text(NSIS.utils.transactionTypeToString(item));
      $("td:nth-of-type(4)", row).text(NSIS.utils.formatCurrency(item.paymentDetail.amount));
      $("td:nth-of-type(5)", row).text(item.paymentDetail.merchantName);
      $("td:nth-of-type(6)", row).text(NSIS.utils.maskCardNumber(item.paymentDetail.cardNumber));
      $("td:nth-of-type(7)", row).text(NSIS.utils.responseCodeToString(item.paymentResponseCode));

      row.attr("data-href", "./#/transaction/" + item.transactionId);

      tbody.append(row);
    });

    $("#transactions-view #transactions-table [data-href]").on("click", function () {
      window.location = $(this).data("href");
    });

    $('#transactions-table').DataTable({ order: [[0, "desc"]] });

    NSIS.utils.enableView("transactions");
  }
};