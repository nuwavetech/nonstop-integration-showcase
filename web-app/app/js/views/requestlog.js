"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Request Log view functionality
 */
NSIS.views.requestlog = {
  /**
   * Initialize the request log view
   */
  init: function() {
    // Initialization is handled in app.js (clear button)
  },

  /**
   * Render the request log view
   */
  render: function() {
    let log = $("#request-log");

    log.empty();

    if (NSIS.api.requestLog.length === 0) {
      log.append(NSIS.utils.getTemplate("#request-log-empty-template"));
      NSIS.utils.enableView("requestlog");
      return;
    }

    NSIS.api.requestLog.forEach((item, i) => {
      let t = NSIS.utils.getTemplate("#request-log-item-template");

      $("#heading-i", t).attr("id", "heading-" + i);
      $("#collapse-i", t).attr("id", "collapse-" + i);
      $("[data-target=\"#collapse-i\"]", t).attr("data-target", "#collapse-" + i);
      $("[aria-labelledby=\"heading-i\"]", t).attr("aria-labelledby", "heading-" + i);
      $("[aria-controls=\"collapse-i\"]", t).attr("aria-controls", "collapse-" + i);
      $("button", t).text(item.title);
      $(".card-body pre:nth-of-type(1)", t).text(item.request);
      $(".card-body pre:nth-of-type(2)", t).text(item.response);

      log.append(t);
    });

    NSIS.utils.enableView("requestlog");
  }
};