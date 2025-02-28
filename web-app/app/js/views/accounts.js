"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Accounts view functionality
 */
NSIS.views.accounts = {
  /**
   * Initialize the accounts view
   */
  init : function() {
    $("#new-account-button").on("click", () => {
      NSIS.utils.go("account");
    });
  },

  /**
   * Render the accounts view
   */
  render : async function() {
    let response =
        await NSIS.api.doApiRequest({method : "GET", uri : "/paysim/accounts"});

    if (response.status !== 200) {
      NSIS.utils.raiseAlert("error", "Unable to load the accounts list.");
      NSIS.utils.go("about");
      return;
    }

    let accounts = response.json.accounts;

    $("#accounts-table > tbody").empty();

    if (accounts.length === 0) {
      $("#accounts-table").append("<tr><td colspan=\"7\">There are no accounts on file.</td></tr>");
      NSIS.utils.enableView("accounts");
      return;
    }

    accounts.forEach((item) => {
      let row = NSIS.utils.getTemplate("#account-table-row-template");

      $("td:nth-child(1)", row).text(item.accountNumber);
      $("td:nth-child(2)", row).text(item.accountDetail.firstName);
      $("td:nth-child(3)", row).text(item.accountDetail.lastName);
      $("td:nth-child(4)", row).text(item.accountDetail.address1);
      $("td:nth-child(5)", row).text(item.accountDetail.city);
      $("td:nth-child(6)", row).text(item.accountDetail.state);
      $("td:nth-child(7)", row).text(item.accountDetail.postalCode);

      row.attr("data-href", "./#/account/" + item.accountNumber);

      $("#accounts-table > tbody").append(row);
    });

    $("#accounts-table [data-href]").on("click", function () {
      window.location = $(this).data("href");
    });

    NSIS.utils.enableView("accounts");
  }
};