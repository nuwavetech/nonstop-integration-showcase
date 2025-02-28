"use strict";

// Create the NSIS namespace
window.NSIS = window.NSIS || {};

/**
 * Utility functions for the NonStop Integration Showcase
 */
NSIS.utils = {
  /**
   * Format a number as currency
   * @param {number} amt - Amount to format
   * @returns {string} Formatted currency string
   */
  formatCurrency: function(amt) {
    const formatter = new Intl.NumberFormat('en-US', {
      style: 'currency',
      currency: 'USD',
      minimumFractionDigits: 2
    });

    return formatter.format(amt);
  },

  /**
   * Format a date/time string
   * @param {string} dateTime - Date time to format
   * @returns {string} Formatted date time
   */
  formatDateTime: function(dateTime) {
    let date = new Date(dateTime);

    let dateString = date.getFullYear() + "/";
    dateString += ("0" + (date.getMonth() + 1)).slice(-2) + "/";
    dateString += ("0" + date.getDate()).slice(-2) + " ";

    let h = date.getHours();
    let ap = "AM";
    if (h > 12) {
      h -= 12;
      ap = "PM";
    } else if (h === 0) {
      h = 12;
    }
    dateString += ("0" + h).slice(-2) + ":";
    dateString += ("0" + date.getMinutes()).slice(-2) + ":";
    dateString += ("0" + date.getSeconds()).slice(-2) + " " + ap;

    return dateString;
  },

  /**
   * Parse a currency string to a number
   * @param {string} val - Currency string
   * @returns {number} Parsed amount
   */
  parseCurrency: function(val) {
    val = val.replace(/[^0-9\.]+/g, "");
    return Number(val);
  },

  /**
   * Mask a card number for display
   * @param {string} cardNumber - Card number to mask
   * @returns {string} Masked card number
   */
  maskCardNumber: function(cardNumber) {
    return cardNumber.replace(new RegExp(/(\d{4}).*(\d{4})/, "gm"), "$1************$2");
  },

  /**
   * Get a template element from the DOM
   * @param {string} id - Template ID
   * @returns {jQuery} Template element
   */
  getTemplate: function(id) {
    let t = $(id).clone();
    t.removeClass("template");
    t.removeAttr("id");
    return t;
  },

  /**
   * Display an alert message
   * @param {string} type - Alert type (success/error)
   * @param {string} text - Alert message
   */
  raiseAlert: function(type, text) {
    let cl = (type === "success" ? "alert-success" : "alert-danger");

    $("#alert").append("<div>" + text + "</div>");
    let a = $("#alert > div");
    a.addClass("alert alert-dismissable fade show");
    a.addClass(cl);
    a.attr("role", "alert");
    setTimeout(function () {
      a.alert('close');
    }, 4000);
  },

  /**
   * Navigate to a different view
   * @param {string} path - Path to navigate to
   */
  go: function(path) {
    /* Default path is accounts. */
    if (typeof path === "undefined") {
      path = "accounts";
    }
    /* If the path already has a leading slash, remove it. */
    if (path.charAt(0) === '/') {
      path = path.substring(1);
    }
    window.location = "./#/" + path;
    $(window).trigger('hashchange');
  },

  /**
   * Convert transaction type code to string
   * @param {object} tx - Transaction object
   * @returns {string} Transaction type string
   */
  transactionTypeToString: function(tx) {
    let s;
    if (tx.transactionType === 1) {
      s = "Sale";
      if (tx.relatedTransactionId.length !== 0) {
        s += " (Voided)";
      }
    } else {
      s = "Void";
    }
    return s;
  },

  /**
   * Enable a view for display
   * @param {string} view - View ID to enable
   */
  enableView: function(view) {
    $("#" + view + "-view").addClass("visible");
    $("#" + view + "-link").addClass("active");
  },

  /**
   * Convert response code to string
   * @param {string} code - Response code
   * @returns {string} Response code string
   */
  responseCodeToString: function(code) {
    // These should be moved to a central config if shared across modules
    const responseCodeStrings = {
      "00": "Approved",
      "14": "Invalid Card Number",
      "51": "Insufficient Funds",
      "54": "Card Expired",
      "80": "Invalid Date",
      "82": "Invalid CVV",
      "98": "Card Restricted"
    };

    return code + " - " + responseCodeStrings[code];
  }
};