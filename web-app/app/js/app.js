"use strict";

// Ensure NSIS namespace exists
window.NSIS = window.NSIS || {};

// Initialize the application state
NSIS.state = {
  settings : {}
};

/**
 * Main application functionality
 */
NSIS.app = {
  /**
   * Initialize the application
   */
  init : async function() {
    // Load settings
    NSIS.state.settings = await $.getJSON("./config/settings.json");

    // Initialize feather icons
    feather.replace();

    // Initialize toasts
    $(".toast").toast({delay : 2000});

    // Initialize view modules
    NSIS.views.accounts.init();
    NSIS.views.account.init();
    NSIS.views.cards.init();
    NSIS.views.card.init();
    NSIS.views.payment.init();
    NSIS.views.transaction.init();
    NSIS.views.transactions.init();
    NSIS.views.requestlog.init();
    NSIS.views.settings.init();
    NSIS.views.about.init();

    // Register global event handlers
    NSIS.app.registerEventHandlers();

    // Setup the hash change listener to go to the default view
    $(window).on("hashchange", () => {
      let path = decodeURI(window.location.hash).substring(1);
      NSIS.app.onHashChange(path);
    });

    // Navigate to the default view
    NSIS.utils.go();
  },

  /**
   * Register global event handlers
   */
  registerEventHandlers : function() {
    // Back buttons
    $(".back-button").on("click", () => { window.history.back(); });

    // Clear request log
    $("#clear-request-log").on("click", () => {
      NSIS.api.clearRequestLog();
      NSIS.views.requestlog.render();
    });
  },

  /**
   * Handle hash change events
   * @param {string} path - URL path
   */
  onHashChange : function(path) {
    // Hide the current view and deactivate the current nav link
    $("main .view").removeClass("visible");
    $("#sidebar .nav-link").removeClass("active");

    // The view is the first segment of the path. Default to the accounts view.
    let view;
    if (typeof path !== "undefined") {
      let segments = path.split("/");
      if (segments.length >= 2) {
        view = segments[1].toLowerCase();
      }
    }

    // Set the active class on the appropriate nav link
    $("#" + (view || "accounts") + "-link").addClass("active");

    switch (view) {
    case "account":
      NSIS.views.account.render(path);
      break;
    case "card":
      NSIS.views.card.render(path);
      break;
    case "cards":
      NSIS.views.cards.render();
      break;
    case "payment":
      NSIS.views.payment.render();
      break;
    case "transaction":
      NSIS.views.transaction.render(path);
      break;
    case "transactions":
      NSIS.views.transactions.render();
      break;
    case "requestlog":
      NSIS.views.requestlog.render();
      break;
    case "settings":
      NSIS.views.settings.render();
      break;
    case "about":
      NSIS.views.about.render();
      break;
    case "accounts":
    default:
      NSIS.views.accounts.render();
      break;
      }
  }
};

// Initialize the application when jQuery is ready
$(async function() {
  await NSIS.app.init();
});