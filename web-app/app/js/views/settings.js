"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * Settings view functionality
 */
NSIS.views.settings = {
  /**
   * Initialize the settings view
   */
  init: function() {
    $("#settings-view form").on("submit", (e) => {
      e.preventDefault();
      NSIS.views.settings.saveSettings();
    });
  },

  /**
   * Render the settings view
   */
  render: function() {
    $("#settings-view #host").val(NSIS.state.settings.baseUrl);
    NSIS.utils.enableView("settings");
  },

  /**
   * Save the settings
   */
  saveSettings: function() {
    let host = $("#settings-view #host").val();

    /* We could use a complex regex to validate the URL, but this is a demo so let's go with
    garbage in, garbage out. */
    NSIS.state.settings.baseUrl = host;
    NSIS.utils.raiseAlert("success", "The settings have been updated.");
  }
};