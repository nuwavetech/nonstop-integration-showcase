"use strict";

// Ensure NSIS namespace
window.NSIS = window.NSIS || {};

/**
 * API functionality for the NonStop Integration Showcase
 */
NSIS.api = {
  // Default request log settings
  requestLog: [],
  requestLogMaxEntries: 25,

  /**
   * Perform an API request
   * @param {object} request - Request parameters
   * @returns {Promise<object>} Response object
   */
  doApiRequest: async function(request) {
    let settings = {};
    const eol = "\n";

    settings.method = request.method;
    settings.url = NSIS.state.settings.baseUrl + request.uri;
    if (typeof request.json !== "undefined") {
      settings.data = JSON.stringify(request.json, null, 2);
      settings.contentType = "application/json";
    } else if (typeof request.text !== "undefined") {
      settings.data = request.text;
      settings.contentType = "text/plain";
    }

    /* Create the request portion of the request log entry. */
    let rq = request.method + " " + request.uri + " " + "HTTP/1.1" + eol;
    if (typeof settings.data !== "undefined") {
      rq += "content-type: " + settings.contentType + eol;
      rq += "content-length: " + settings.data.length + eol + eol;
      rq += (typeof request.json !== "undefined" ? JSON.stringify(request.json, null, 2) : request.text) + eol;
    } else {
      rq += "Content-Length: 0" + eol;
    }

    let response = await new Promise((resolve, reject) => {
      $.ajax(settings).done((data, status, xhr) => {
        resolve({ status: xhr.status, headers: xhr.getAllResponseHeaders(), text: xhr.responseText, json: xhr.responseJSON });
      }).fail((xhr, status, error) => {
        resolve({ status: xhr.status, headers: xhr.getAllResponseHeaders(), text: xhr.responseText, json: xhr.responseJSON });
      }).always((data, status, xhr) => {

        if (status === "error") {
          xhr = data;
        }

        let rs = "HTTP/1.1 " + xhr.status + " " + xhr.statusText + eol;
        rs += xhr.getAllResponseHeaders();
        rs += eol;

        if (typeof data !== "undefined") {
          try {
            rs += JSON.stringify(JSON.parse(xhr.responseText), null, 2);
          } catch (e) {
            rs += "Response body is not JSON" + eol;
          }
        }

        let title = request.method + " " + request.uri;
        title += " - " + xhr.status + " " + xhr.statusText;

        /* Add this item to the beginning of the array and truncate if necessary. */
        NSIS.api.requestLog.unshift({ title: title, request: rq, response: rs });
        if (NSIS.api.requestLog.length > NSIS.api.requestLogMaxEntries) {
          NSIS.api.requestLog.length = NSIS.api.requestLogMaxEntries;
        }
      });
    });

    return response;
  },

  /**
   * Clear the request log
   */
  clearRequestLog: function() {
    NSIS.api.requestLog = [];
  }
};