"use strict";

window.NSIS = window.NSIS || {};
NSIS.iso20022 = NSIS.iso20022 || {};

/**
 * Form-schema registry, keyed by ISO 20022 message type.
 *
 * Each schema is consumed generically by NSIS.views.iso20022:
 *   - formFields drives form rendering and value collection.
 *   - defaults are surfaced read-only in the "advanced defaults" panel
 *     and included on the wire so the Pathway-side MT formatter sees them.
 *   - problemOptions populates the problem-toggle dropdown.
 *   - applyProblem mutates form values to produce a CBPR+ violation
 *     that survives translation but fails MX validation. Demo-only.
 *   - buildGenerateRequest assembles the stage-1 request body.
 *
 * To add a new message type (cain.001, caaa.001, ...): register another
 * key here. The view code does not need to change.
 */
NSIS.iso20022.schemas = {
  "pacs.008": {
    displayName: "Customer Credit Transfer (pacs.008)",

    formFields: [
      { group: "Debtor", id: "debtor.name",     label: "Name",    type: "text", maxlength: 70,  required: true },
      { group: "Debtor", id: "debtor.bic",      label: "BIC",     type: "text", maxlength: 11,  required: true, placeholder: "e.g. BANKUS30" },
      { group: "Debtor", id: "debtor.account",  label: "Account", type: "text", maxlength: 34,  required: true, placeholder: "IBAN or account #" },

      { group: "Creditor", id: "creditor.name",    label: "Name",    type: "text", maxlength: 70,  required: true },
      { group: "Creditor", id: "creditor.bic",     label: "BIC",     type: "text", maxlength: 11,  required: true, placeholder: "e.g. BANKDE30" },
      { group: "Creditor", id: "creditor.account", label: "Account", type: "text", maxlength: 34,  required: true, placeholder: "IBAN or account #" },

      { group: "Payment", id: "amount",         label: "Amount",   type: "decimal", maxlength: 18,  required: true, placeholder: "1000.00" },
      { group: "Payment", id: "currency",       label: "Currency", type: "text", maxlength: 3,   required: true, placeholder: "USD" },
      { group: "Payment", id: "remittanceInfo", label: "Remittance Info", type: "text", maxlength: 140, required: false }
    ],

    /* Read-only defaults. Tune in coordination with the Pathway-side MT formatter owner. */
    defaults: {
      settlementMethod:    "INDA",
      chargesCode:         "DEBT",
      instructionPriority: "NORM",
      serviceLevelCode:    "G001",
      valueDateOffsetDays: 0,
      senderReference:     "",
      receiverReference:   ""
    },

    problemOptions: [
      { id: "none",          label: "(none)",        description: "" },
      { id: "malformed-bic", label: "Malformed BIC", description: "Substitutes a creditor BIC with a digit in the institution code; survives translation, fails CBPR+ BIC validation." }
    ],

    applyProblem: function(values, problemId) {
      if (problemId === "malformed-bic") {
        values.creditor = values.creditor || {};
        /* "BAN1" — digit in the institution-code (positions 1–4) violates
           [A-Z]{4} but is otherwise well-formed enough to survive translation. */
        values.creditor.bic = "BAN1US30";
      }
      return values;
    },

    buildGenerateRequest: function(transactionId, values) {
      return {
        transactionId: transactionId,
        messageType:   "pacs.008",
        formData:      values,
        defaults:      this.defaults
      };
    }
  }
};
