"use strict";

// Ensure NSIS namespace and views object
window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * About view functionality
 */
NSIS.views.about = {
  /**
   * Initialize the about view
   */
  init: function() {
    // No specific initialization needed
  },

  /**
   * Render the about view
   */
  render: function() {
    NSIS.utils.enableView("about");
  }
};