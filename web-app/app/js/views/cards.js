"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Cards view functionality
 */
NSIS.views.cards = {
  /**
   * Initialize the cards view
   */
  init : function() {
    $("#new-card-button").on("click", () => {
      NSIS.utils.go("card");
    });
  },

  /**
   * Render the cards view
   */
  render : async function() {
    let response =
        await NSIS.api.doApiRequest({method : "GET", uri : "/paysim/cards"});

    if (response.status !== 200) {
      NSIS.utils.raiseAlert("error", "Unable to load the cards list.");
      return;
    }

    let cards = response.json.cards;

    let tbody = $("#cards-view #cards-table > tbody");

    tbody.empty();

    if (cards.length === 0) {
      tbody.append("<tr><td colspan=\"7\">There are no cards on file.</td></tr>");
      NSIS.utils.enableView("cards");
      return;
    }

    cards.forEach((item) => {
      let row = NSIS.utils.getTemplate("#card-table-row-template");

      $("td:nth-child(1)", row).text(item.cardNumber);
      $("td:nth-child(2)", row).text(item.cardDetail.nameOnCard);
      $("td:nth-child(3)", row).text(item.cardDetail.accountNumber);
      $("td:nth-child(4)", row).text(NSIS.utils.formatCurrency(item.cardDetail.balance));
      $("td:nth-child(5)", row).text(NSIS.utils.formatCurrency(item.cardDetail.spendingLimit));
      $("td:nth-child(6)", row).text(NSIS.utils.formatCurrency(item.cardDetail.alertLimit));
      $("td:nth-child(7)", row).text(item.cardDetail.isLocked);

      row.attr("data-href", "./#/card/" + item.cardNumber);

      tbody.append(row);
    });

    $("#cards-view #cards-table [data-href]").on("click", function () {
      window.location = $(this).data("href");
    });

    NSIS.utils.enableView("cards");
  }
};