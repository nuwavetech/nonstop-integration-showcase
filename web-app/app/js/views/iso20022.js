"use strict";

window.NSIS = window.NSIS || {};
NSIS.views = NSIS.views || {};

/**
 * ISO 20022 cross-border payment demo view.
 *
 * Stages 1–4: form + MT generation, MT-to-MX translation, CBPR+ validation,
 * MX parse to business-fields table.
 */
NSIS.views.iso20022 = (function() {

  const VIEW_ID         = "iso20022-view";
  const FORM_ID         = "iso20022-form";
  const FIELDS_ID       = "iso20022-fields";
  const DEFAULTS_ID     = "iso20022-defaults";
  const PROBLEM_ID      = "iso20022-problem";
  const MT_PANEL_ID     = "iso20022-mt-panel";
  const MT_PRE_ID       = "iso20022-mt-pre";
  const MT_TYPE_ID      = "iso20022-mt-type";
  const SUBMIT_BTN_ID   = "iso20022-generate-button";
  const TRANSLATE_BTN_ID    = "iso20022-translate-button";
  const MX_PANEL_ID         = "iso20022-mx-panel";
  const MX_PRE_ID           = "iso20022-mx-pre";
  const MX_TYPE_ID          = "iso20022-mx-type";
  const TRANSLATOR_NOTE_ID  = "iso20022-translator-annotations";
  const VALIDATE_BTN_ID     = "iso20022-validate-button";
  const VALIDATION_PANEL_ID = "iso20022-validation-panel";
  const VALIDATION_RESULT_ID = "iso20022-validation-result";
  const PARSE_BTN_ID         = "iso20022-parse-button";
  const PARSE_PANEL_ID       = "iso20022-parse-panel";
  const PARSE_TYPE_ID        = "iso20022-parse-type";
  const PARSE_APPHDR_ID      = "iso20022-parse-apphdr";
  const PARSE_DOCUMENT_ID    = "iso20022-parse-document";

  /* Module state. transactionId is reused across all four stage calls. */
  const state = {
    messageType:        "pacs.008",
    transactionId:      null,
    mtMessage:          null,
    mtType:             null,
    mxMessage:          null,
    mxType:             null,
    translatorValid:    null,
    translatorWarnings: null,
    validationValid:    null,
    validationSchema:   null,
    validationErrors:   null,
    parseMessageType:   null,
    parseFields:        null,
    parseTotalFields:   null
  };

  function schema() {
    return NSIS.iso20022.schemas[state.messageType];
  }

  function escapeHtml(s) {
    const d = document.createElement("div");
    d.textContent = s == null ? "" : String(s);
    return d.innerHTML;
  }

  /* Set a nested value on `obj` from a dotted path, e.g. "debtor.bic" -> obj.debtor.bic. */
  function setNested(obj, path, value) {
    const parts = path.split(".");
    let cur = obj;
    for (let i = 0; i < parts.length - 1; i++) {
      const k = parts[i];
      if (cur[k] === undefined) cur[k] = {};
      cur = cur[k];
    }
    cur[parts[parts.length - 1]] = value;
  }

  function renderForm() {
    const sch = schema();
    const $fields = $("#" + FIELDS_ID).empty();

    /* Group fields by their `group` for visual sectioning. */
    const groups = [];
    const seen = {};
    sch.formFields.forEach(f => {
      if (!seen[f.group]) { seen[f.group] = []; groups.push(f.group); }
      seen[f.group].push(f);
    });

    groups.forEach(g => {
      const $section = $("<div class=\"mb-3\"></div>");
      $section.append("<h6 class=\"text-muted mt-2\">" + escapeHtml(g) + "</h6>");
      const $row = $("<div class=\"row\"></div>");
      seen[g].forEach(f => {
        const inputId = "iso-" + f.id.replace(/\./g, "-");
        const $col = $("<div class=\"col-md-4 mb-2\"></div>");
        $col.append("<label for=\"" + inputId + "\">" + escapeHtml(f.label) + "</label>");
        const isDecimal = f.type === "decimal";
        const attrs = [
          "type=\"text\"",
          "class=\"form-control form-control-sm\"",
          "id=\"" + inputId + "\"",
          "data-iso-path=\"" + f.id + "\"",
          "maxlength=\"" + f.maxlength + "\""
        ];
        if (isDecimal) {
          attrs.push("inputmode=\"decimal\"");
          attrs.push("data-iso-decimal");
        }
        if (f.required)    attrs.push("required");
        if (f.placeholder) attrs.push("placeholder=\"" + escapeHtml(f.placeholder) + "\"");
        $col.append("<input " + attrs.join(" ") + ">");
        $row.append($col);
      });
      $section.append($row);
      $fields.append($section);
    });
  }

  /* Restrict input to digits and at most one decimal point. */
  function filterDecimalInput(input) {
    let v = input.value;
    let cleaned = v.replace(/[^0-9.]/g, "");
    const firstDot = cleaned.indexOf(".");
    if (firstDot >= 0) {
      cleaned = cleaned.slice(0, firstDot + 1)
              + cleaned.slice(firstDot + 1).replace(/\./g, "");
    }
    if (cleaned !== v) {
      const pos = Math.max(0, (input.selectionStart || 0) - (v.length - cleaned.length));
      input.value = cleaned;
      try { input.setSelectionRange(pos, pos); } catch (e) { /* IE/edge cases */ }
    }
  }

  function renderDefaultsPanel() {
    const $body = $("#" + DEFAULTS_ID);
    $body.empty();
    const $tbl = $("<table class=\"table table-sm mb-0\"></table>");
    const $tb = $("<tbody></tbody>");
    Object.entries(schema().defaults).forEach(([k, v]) => {
      $tb.append(
        "<tr><td><code>" + escapeHtml(k) + "</code></td>"
        + "<td>" + escapeHtml(v === "" ? "(blank)" : v) + "</td></tr>"
      );
    });
    $tbl.append($tb);
    $body.append($tbl);
  }

  function renderProblemDropdown() {
    const $sel = $("#" + PROBLEM_ID).empty();
    schema().problemOptions.forEach(opt => {
      $sel.append("<option value=\"" + escapeHtml(opt.id) + "\""
                  + (opt.description ? " title=\"" + escapeHtml(opt.description) + "\"" : "")
                  + ">" + escapeHtml(opt.label) + "</option>");
    });
  }

  function collectFormValues() {
    const values = {};
    $("#" + FIELDS_ID + " [data-iso-path]").each(function() {
      const path = $(this).attr("data-iso-path");
      setNested(values, path, $(this).val());
    });
    return values;
  }

  /* Wrap leading :NN: or :NNX: tags on each line in a highlight span.
     SWIFT MT messages use CRLF line endings per the standard; normalize so
     the regex match isn't polluted by trailing \r. */
  function highlightMtTags(mt) {
    const normalized = (mt || "").replace(/\r\n/g, "\n").replace(/\r/g, "");
    const lines = normalized.split("\n");
    const out = lines.map(line => {
      const m = line.match(/^(:\d{2}[A-Z]?:)(.*)$/);
      if (m) {
        return "<span class=\"iso-tag\">" + escapeHtml(m[1]) + "</span>" + escapeHtml(m[2]);
      }
      return escapeHtml(line);
    });
    return out.join("\n");
  }

  function renderMtPanel(mtMessage, mtType) {
    $("#" + MT_TYPE_ID).text(mtType || "");
    $("#" + MT_PRE_ID).html(highlightMtTags(mtMessage));
    $("#" + MT_PANEL_ID).addClass("visible");
    /* Show the Translate button now that an MT is available. */
    $("#" + TRANSLATE_BTN_ID).removeClass("d-none");
  }

  function clearMtPanel() {
    $("#" + MT_PANEL_ID).removeClass("visible");
    $("#" + MT_PRE_ID).empty();
    $("#" + MT_TYPE_ID).empty();
  }

  /* Pretty-print well-formed XML with depth-based indentation.
     Mixed-content lines (e.g. <Tag>text</Tag>) are left on one line. */
  function prettyPrintXml(xml) {
    const tagSeparated = (xml || "").replace(/>\s*</g, ">\n<");
    let indent = 0;
    return tagSeparated.split("\n").map(line => {
      const isClose      = /^<\//.test(line);
      const isSelfClose  = /\/>\s*$/.test(line);
      const isPI         = /^<\?/.test(line);
      const isComment    = /^<!--/.test(line);
      const hasInlineClose = /<\/[^>]+>/.test(line) && !isClose;
      if (isClose) indent = Math.max(0, indent - 1);
      const out = "  ".repeat(indent) + line;
      if (!isClose && !isSelfClose && !isPI && !isComment && !hasInlineClose) {
        indent++;
      }
      return out;
    }).join("\n");
  }

  /* Light XML syntax highlighting: tag names and attribute names only. */
  function highlightXml(xml) {
    let html = escapeHtml(xml);
    html = html.replace(/&lt;(\/?)([a-zA-Z][\w:.-]*)/g,
      "&lt;$1<span class=\"iso-xml-tag\">$2</span>");
    html = html.replace(/(\s)([a-zA-Z][\w:.-]*)=&quot;/g,
      "$1<span class=\"iso-xml-attr\">$2</span>=&quot;");
    return html;
  }

  function renderTranslatorAnnotations(valid, warnings) {
    const $node = $("#" + TRANSLATOR_NOTE_ID).empty();
    if (valid === null || valid === undefined) return;

    const $note = $("<div class=\"iso-translator-note\"></div>");
    const status = valid
      ? "Translator: clean conversion"
      : "Translator: conversion completed with notes";
    $note.append("<span class=\"iso-translator-status\">"
      + escapeHtml(status) + "</span>");

    const ws = warnings || [];
    if (ws.length > 0) {
      const $ul = $("<ul></ul>");
      ws.forEach(w => { $ul.append("<li>" + escapeHtml(w) + "</li>"); });
      $note.append($ul);
    } else if (valid) {
      $note.append("<span class=\"text-muted\">no warnings</span>");
    }
    $node.append($note);
  }

  function renderMxPanel(mxMessage, mxType, valid, warnings) {
    $("#" + MX_TYPE_ID).text(mxType || "");
    renderTranslatorAnnotations(valid, warnings);
    $("#" + MX_PRE_ID).html(highlightXml(prettyPrintXml(mxMessage)));
    $("#" + MX_PANEL_ID).addClass("visible");
    /* Show the Validate button now that an MX is available. */
    $("#" + VALIDATE_BTN_ID).removeClass("d-none");
  }

  function clearMxPanel() {
    $("#" + MX_PANEL_ID).removeClass("visible");
    $("#" + MX_PRE_ID).empty();
    $("#" + MX_TYPE_ID).empty();
    $("#" + TRANSLATOR_NOTE_ID).empty();
  }

  /* Validation errors come back as plain strings of the form
       "[CATEGORY] /xpath: description"
     (categories observed: XSD_ERROR, BIC_ERROR). Object entries with
     {path, message} are also handled for forward-compat with the spec draft. */
  function parseValidationError(e) {
    if (e && typeof e === "object" && (e.path || e.message)) {
      return {
        category: e.category || null,
        path:     e.path || null,
        message:  e.message || ""
      };
    }
    if (typeof e !== "string") {
      return { category: null, path: null, message: String(e) };
    }
    const m = e.match(/^\[([A-Z_]+)\]\s+(\/[^:]+):\s+(.*)$/);
    if (m) {
      return { category: m[1], path: m[2], message: m[3].trim() };
    }
    return { category: null, path: null, message: e };
  }

  function renderValidationPanel(valid, schemaVersion, errors) {
    const $result = $("#" + VALIDATION_RESULT_ID).empty();
    const $box = $("<div class=\"iso-validation-result\"></div>")
      .addClass(valid ? "iso-validation-pass" : "iso-validation-fail");

    const icon = valid ? "✔" : "✘";
    const label = valid ? "Valid" : "Invalid";
    $box.append(
      "<span class=\"iso-validation-icon\">" + icon + "</span>"
      + "<span class=\"iso-validation-label\">" + escapeHtml(label) + "</span>"
      + (schemaVersion
          ? "<span class=\"iso-validation-schema\">" + escapeHtml(schemaVersion) + "</span>"
          : "")
    );

    const errs = errors || [];
    if (!valid && errs.length > 0) {
      const $ul = $("<ul class=\"iso-validation-errors\"></ul>");
      errs.forEach(e => {
        const p = parseValidationError(e);
        let html = "<li>";
        if (p.category) {
          html += "<span class=\"iso-validation-category\">"
                + escapeHtml(p.category) + "</span> ";
        }
        if (p.path) {
          html += "<code class=\"iso-validation-path\">"
                + escapeHtml(p.path) + "</code>";
        }
        html += "<span class=\"iso-validation-message\">"
              + escapeHtml(p.message) + "</span>";
        html += "</li>";
        $ul.append(html);
      });
      $box.append($ul);
    }

    $result.append($box);
    $("#" + VALIDATION_PANEL_ID).addClass("visible");
  }

  function clearValidationPanel() {
    $("#" + VALIDATION_PANEL_ID).removeClass("visible");
    $("#" + VALIDATION_RESULT_ID).empty();
  }

  /* Render a single key/value table from an entries array. */
  function renderKvTable(entries) {
    let html = "<table class=\"iso-parse-table\"><tbody>";
    entries.forEach(([k, v]) => {
      html += "<tr>"
            + "<td class=\"iso-parse-key\">" + escapeHtml(k) + "</td>"
            + "<td class=\"iso-parse-value\">" + escapeHtml(v) + "</td>"
            + "</tr>";
    });
    html += "</tbody></table>";
    return html;
  }

  /* Normalize incoming `fields` to a list of [fieldName, fieldValue] pairs.
     Backend returns an array of {fieldName, fieldValue} objects; older
     object-shaped responses are accepted as a fallback. */
  function normalizeParseFields(fields) {
    if (Array.isArray(fields)) {
      return fields
        .filter(f => f && typeof f === "object")
        .map(f => {
          const k = f.fieldName != null ? String(f.fieldName) : "";
          const v = f.fieldValue != null ? String(f.fieldValue) : "";
          return [k, v];
        })
        .filter(([k]) => k !== "");
    }
    if (fields && typeof fields === "object") {
      return Object.entries(fields).map(([k, v]) => [
        k,
        (v === null || v === undefined) ? "" : String(v)
      ]);
    }
    return [];
  }

  /* Split fields into AppHdr_* and the business document; render two sections. */
  function renderParsePanel(messageType, fields, totalFields) {
    $("#" + PARSE_TYPE_ID).text(messageType || "");

    const pairs = normalizeParseFields(fields);
    const appHdr = pairs.filter(([k]) => /^AppHdr/.test(k));
    const doc    = pairs.filter(([k]) => !/^AppHdr/.test(k));

    const $appHdr = $("#" + PARSE_APPHDR_ID).empty();

    /* Show a truncation banner above the tables when totalFields exceeds
       what was actually returned. Helps demo viewers understand that some
       fields were dropped due to LWS/IPM size limits. */
    if (typeof totalFields === "number" && totalFields > pairs.length) {
      const dropped = totalFields - pairs.length;
      $appHdr.append(
        "<div class=\"alert alert-warning py-1 px-2 mb-2\" style=\"font-size:0.85rem\">"
        + "Showing " + pairs.length + " of " + totalFields + " fields &mdash; "
        + dropped + " omitted due to response size limits."
        + "</div>"
      );
    }

    if (appHdr.length > 0) {
      $appHdr.append("<div class=\"iso-parse-section\">"
        + "<div class=\"iso-parse-section-title\">Application Header</div>"
        + renderKvTable(appHdr)
        + "</div>");
    }

    const $doc = $("#" + PARSE_DOCUMENT_ID).empty();
    if (doc.length > 0) {
      $doc.append("<div class=\"iso-parse-section\">"
        + "<div class=\"iso-parse-section-title\">Business Document</div>"
        + renderKvTable(doc)
        + "</div>");
    }

    if (appHdr.length === 0 && doc.length === 0) {
      $doc.append("<p class=\"text-muted mb-0\">No fields returned.</p>");
    }

    $("#" + PARSE_PANEL_ID).addClass("visible");
  }

  function clearParsePanel() {
    $("#" + PARSE_PANEL_ID).removeClass("visible");
    $("#" + PARSE_TYPE_ID).empty();
    $("#" + PARSE_APPHDR_ID).empty();
    $("#" + PARSE_DOCUMENT_ID).empty();
  }

  /* Reset state below a given stage when an earlier stage is re-run, so
     stale downstream artifacts don't linger under a fresh transactionId. */
  function clearAfterStage1() {
    state.mxMessage = null;
    state.mxType = null;
    state.translatorValid = null;
    state.translatorWarnings = null;
    clearMxPanel();
    clearAfterStage2();
  }

  function clearAfterStage2() {
    state.validationValid = null;
    state.validationSchema = null;
    state.validationErrors = null;
    state.parseMessageType = null;
    state.parseFields = null;
    state.parseTotalFields = null;
    clearValidationPanel();
    clearParsePanel();
  }

  function setSubmitting(isSubmitting) {
    const $b = $("#" + SUBMIT_BTN_ID);
    $b.prop("disabled", isSubmitting);
    $b.find(".spinner-border").toggleClass("d-none", !isSubmitting);
  }

  function setTranslating(isTranslating) {
    const $b = $("#" + TRANSLATE_BTN_ID);
    $b.prop("disabled", isTranslating);
    $b.find(".spinner-border").toggleClass("d-none", !isTranslating);
  }

  function setValidating(isValidating) {
    const $b = $("#" + VALIDATE_BTN_ID);
    $b.prop("disabled", isValidating);
    $b.find(".spinner-border").toggleClass("d-none", !isValidating);
  }

  function setParsing(isParsing) {
    const $b = $("#" + PARSE_BTN_ID);
    $b.prop("disabled", isParsing);
    $b.find(".spinner-border").toggleClass("d-none", !isParsing);
  }

  async function submitGenerate() {
    const sch = schema();
    let values = collectFormValues();
    const problemId = $("#" + PROBLEM_ID).val() || "none";
    values = sch.applyProblem(values, problemId);

    state.transactionId = NSIS.utils.uuid();
    const body = sch.buildGenerateRequest(state.transactionId, values);

    clearMtPanel();
    clearAfterStage1();
    setSubmitting(true);
    try {
      const response = await NSIS.api.doApiRequest({
        method: "POST",
        uri:    "/api/iso20022/mt/generate",
        json:   body
      });

      if (response.status !== 200 || !response.json || !response.json.mtMessage) {
        const detail = response.json && response.json.error
          ? response.json.error
          : ("HTTP " + response.status);
        NSIS.utils.raiseAlert("error", "MT generation failed: " + detail);
        return;
      }

      state.mtMessage = response.json.mtMessage;
      state.mtType    = response.json.messageType;
      renderMtPanel(state.mtMessage, state.mtType);
    } catch (e) {
      NSIS.utils.raiseAlert("error", "MT generation failed: " + (e && e.message ? e.message : e));
    } finally {
      setSubmitting(false);
    }
  }

  async function submitTranslate() {
    if (!state.mtMessage || !state.transactionId) {
      NSIS.utils.raiseAlert("error", "No MT message to translate. Generate one first.");
      return;
    }

    clearAfterStage2();
    setTranslating(true);
    try {
      const response = await NSIS.api.doApiRequest({
        method: "POST",
        uri:    "/api/iso20022/translate",
        json:   {
          transactionId: state.transactionId,
          mtMessage:     state.mtMessage
        }
      });

      if (response.status !== 200 || !response.json || !response.json.mxMessage) {
        const detail = response.json && response.json.error
          ? response.json.error
          : ("HTTP " + response.status);
        NSIS.utils.raiseAlert("error", "MT-to-MX translation failed: " + detail);
        return;
      }

      state.mxMessage         = response.json.mxMessage;
      state.mxType            = response.json.messageType;
      state.translatorValid   = response.json.valid;
      state.translatorWarnings = response.json.warnings || [];
      renderMxPanel(state.mxMessage, state.mxType,
                    state.translatorValid, state.translatorWarnings);
    } catch (e) {
      NSIS.utils.raiseAlert("error", "MT-to-MX translation failed: "
        + (e && e.message ? e.message : e));
    } finally {
      setTranslating(false);
    }
  }

  async function submitValidate() {
    if (!state.mxMessage || !state.transactionId) {
      NSIS.utils.raiseAlert("error", "No MX message to validate. Translate one first.");
      return;
    }

    clearValidationPanel();
    setValidating(true);
    try {
      const response = await NSIS.api.doApiRequest({
        method: "POST",
        uri:    "/api/iso20022/validate",
        json:   {
          transactionId: state.transactionId,
          mxMessage:     state.mxMessage
        }
      });

      /* A validation FAILURE (valid:false) is still a successful HTTP response.
         Only HTTP non-200 or a missing `valid` field is a transport error. */
      if (response.status !== 200 || !response.json
          || typeof response.json.valid !== "boolean") {
        const detail = response.json && response.json.error
          ? response.json.error
          : ("HTTP " + response.status);
        NSIS.utils.raiseAlert("error", "MX validation failed: " + detail);
        return;
      }

      state.validationValid  = response.json.valid;
      state.validationSchema = response.json.schemaVersion;
      state.validationErrors = response.json.errors || [];
      renderValidationPanel(state.validationValid,
                            state.validationSchema,
                            state.validationErrors);
    } catch (e) {
      NSIS.utils.raiseAlert("error", "MX validation failed: "
        + (e && e.message ? e.message : e));
    } finally {
      setValidating(false);
    }
  }

  async function submitParse() {
    if (!state.mxMessage || !state.transactionId) {
      NSIS.utils.raiseAlert("error", "No MX message to parse. Translate one first.");
      return;
    }

    clearParsePanel();
    setParsing(true);
    try {
      const response = await NSIS.api.doApiRequest({
        method: "POST",
        uri:    "/api/iso20022/parse",
        json:   {
          transactionId: state.transactionId,
          mxMessage:     state.mxMessage
        }
      });

      if (response.status !== 200 || !response.json
          || !Array.isArray(response.json.fields)) {
        const detail = response.json && response.json.error
          ? response.json.error
          : ("HTTP " + response.status);
        NSIS.utils.raiseAlert("error", "MX parse failed: " + detail);
        return;
      }

      state.parseMessageType = response.json.messageType;
      state.parseFields      = response.json.fields;
      state.parseTotalFields = response.json.totalFields;
      renderParsePanel(state.parseMessageType,
                       state.parseFields,
                       state.parseTotalFields);
    } catch (e) {
      NSIS.utils.raiseAlert("error", "MX parse failed: "
        + (e && e.message ? e.message : e));
    } finally {
      setParsing(false);
    }
  }

  return {
    init: function() {
      renderForm();
      renderDefaultsPanel();
      renderProblemDropdown();

      $("#" + FORM_ID).on("submit", e => {
        e.preventDefault();
        submitGenerate();
      });

      $("#" + FIELDS_ID).on("input", "[data-iso-decimal]", function() {
        filterDecimalInput(this);
      });

      $("#" + TRANSLATE_BTN_ID).on("click", () => {
        submitTranslate();
      });

      $("#" + VALIDATE_BTN_ID).on("click", () => {
        submitValidate();
      });

      $("#" + PARSE_BTN_ID).on("click", () => {
        submitParse();
      });
    },

    render: function() {
      NSIS.utils.enableView("iso20022");
    }
  };
})();
