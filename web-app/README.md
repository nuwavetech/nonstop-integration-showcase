# LightWave NSIS Web Application
The NSIS Web Application is a Single Page Application (SPA) that implements the user interface for the NonStop Integration Showcase. It hosts two demonstrations: the Payment Card Simulation and the Cross-Border Payment (ISO 20022) demo. The entire application is implemented in a handful of HTML, Javascript, CSS, and image files. The files can be deployed to any HTTP server capable of hosting static content.

The application must be accessed from an HTTP server. <em>It will not work by simply opening the files in a browser from the desktop filesystem.</em> There are a number of solutions available that will allow you to deploy the application to a web server, for example:
+ Deploy to a local copy of [Apache](https://httpd.apache.org/) or [Nginx](https://www.nginx.com/) server.
+ Deploy to an AWS S3 bucket configured for [static web site hosting](https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html).
+ If using Visual Studio Code, use the [Live Server extension](https://marketplace.visualstudio.com/items?itemName=ritwickdey.LiveServer).
+ If using Node.js, use the [http-server package](https://www.npmjs.com/package/http-server).

Any HTTP server capable of hosting static pages is sufficient. All of the files in the [app](app) folder should be deployed to the HTTP server.

### Configuration
The LightWave Server service port must be configured. Edit the settings.json file to configure the host name and service port of your LightWave Server instance.

```javascript
{
  "baseUrl": "http://your-host:your-service-port"
}
```
Note that the port specified should be the service port on which the Payment Card Simulation service is deployed, not the Server Console port. After configuring the port, you may need to refresh your browser in order for the change to take effect.

## Demo Flows

The SPA exposes two demonstrations via the left-hand sidebar:

### Payment Card Simulation

The classic NSIS flow. Use the *Accounts*, *Cards*, *Payments*, and *Transactions* views to create demo data and run a simulated card-payment transaction. See the [service README](../service) for prerequisites and configuration if you also want SMS, email, or Kafka notifications.

### Cross-Border Payment (ISO 20022)

A four-stage demonstration of SWIFT MT to ISO 20022 (pacs.008) cross-border payment processing, end-to-end through LightWave Server, LightWave Client, and a Pathway-side handler that delegates translation and validation to an off-NonStop microservice.

Open the sidebar entry **ISO 20022 Demo &rarr; Cross-Border Payment** and fill in:

- **Debtor** and **Creditor** &mdash; name, BIC, and account (IBAN). Test BICs must have a `0` in position 8 (e.g. `BANKUS30`) to satisfy the translation service in test mode; the form placeholders illustrate the convention.
- **Payment** &mdash; amount, currency, remittance information. The amount field accepts only digits and a single decimal point.

An *Advanced defaults* panel surfaces non-editable pacs.008 fields (settlement method, charges code, service level, etc.) for transparency.

An *Introduce a problem* dropdown lets you exercise the validation pathway with a deliberately malformed creditor BIC. The corrupted message translates cleanly in stage 2 but fails CBPR+ validation in stage 3, demonstrating how each stage catches different classes of issues.

Click each stage button in turn:

1. **Generate** &mdash; produces a SWIFT MT103 message rendered in a monospace panel with field-tag highlighting.
2. **Translate to MX** &mdash; converts the MT to a pacs.008.001.08 MX document, displayed as pretty-printed XML alongside any translator warnings.
3. **Validate CBPR+** &mdash; runs formal CBPR+ schema and business-rule validation; on pass, shows a green badge with the schema version, on fail, lists each violation with its XPath and message.
4. **Parse Business Fields** &mdash; extracts key business fields (`EndToEndId`, `IntrBkSttlmAmt`, BIC pair, etc.) into a two-column table grouped by Application Header and Business Document. If LightWave-side response-size limits caused field truncation, a banner reports how many fields were omitted.

Completed stage panels remain visible as you progress. The *REST API Log* sidebar view shows the underlying SPA-to-LWS request and response for each call.

Each request carries a SPA-generated `transactionId` (UUID v4) that is reused across all four stages so the backend can correlate logs end-to-end.


