# LightWave ACME Card Manager Service

### Prerequisites

+ NonStop C Compiler.
+ An installed instance of [LightWave Server](https://docs.nuwavetech.com/lightwave-server) version 1.1.7 or greater.

#### To enable SMS Notifications
The [Twilio SMS API](https://www.twilio.com/en-us/messaging/channels/sms) is used to send SMS notifications. SMS notifications require:
+ An installed instance of [LightWave Client](https://docs.nuwavetech.com/lightwave-client) version 1.2.7 or greater.
+ A Twilio account enabled for the SMS API. It's possible to use a trial account and send SMS messages.

#### To enable email Notifications
Twilio [Twilio SendGrid email API](https://sendgrid.com/en-us/solutions/email-api) is used to send email notifications. Email notifications require:
+ An installed instance of [LightWave Client](https://docs.nuwavetech.com/lightwave-client) version 1.2.7 or greater.
+ A Twilio SendGrid account enabled for the email API. It's possible to use a trial account and send email notifications.

### Configuration
The following values must be configured in the SETENV TACL macro after installation of the sample:

+ pathmon-name - The process name of the Pathmon. The default is $ACME.
+ lws-isv - The installation subvolume of an installed and running LightWave Server instance. The default is the current subvolume.
+ lwc-isv - The installation subvolume of an installed LightWave Client instance. Required only if SMS notification is enabled. Note that the CONSOLE process does not need to be running. The default is the current subvolume.

+ enable-sms - Set to 1 to enable SMS. The default is 0, or disabled.
+ twilio-messaging-base-url - The base URL for the Twilio messaging API.
+ twilio-account-sid - The SID of your Twilio account.
+ twilio-phone-no - The sending phone number of your Twilio account.

+ enable-email - Set to 1 to enable email. The default is 0, or disabled.
+ sg-base-url - The base URL for the SendGrid email API.
+ sg-from-email - The email sender (from) email address.
+ sg-transaction-template-id - The SendGrid email template ID for payment notifications.
+ sg-card-status-template-id - The SendGrid email template ID for card status notifications.

The LightWave Server API is configured to use the value of the =ACME-PATHMON DEFINE as the Pathmon process name. This DEFINE is set by the SETENV macro. The LightWave Server instance must be restarted with this DEFINE set in order to for the DEFINE to recognized.

### SMS Configuration
If using SMS notifications, the SETENV file must be updated with your Twilio SMS account information, and the TWAUTH file must be updated with the SMS API credentials. These credentials are supplied as the Twilio \<Account SID\>:\<Auth Token\> encoded as a base64 string. For more information see the [TWAUTH](./resources/twauth.txt) template file and [Request Authentication and Signing](https://docs.nuwavetech.com/lightwave-client/1.2.7/request-authentication-and-signing#id-(1.2.7_r4)RequestAuthenticationandSigning-GenericAuthorizationHeaderwithToken) in the LightWave Client documentation.

### Email Configuration
If using email notifications, the SETENV file must be updated with your Twilio SendGrid account information, and the SGAUTH file must be updated with the SendGrid email API key. For more information see the [SGAUTH](./resources/sgauth.txt) template file and [Request Authentication and Signing](https://docs.nuwavetech.com/lightwave-client/1.2.7/request-authentication-and-signing#id-(1.2.7_r4)RequestAuthenticationandSigning-GenericAuthorizationHeaderwithToken) in the LightWave Client documentation.

Email templates have been included with the source. You may install these templates or create your own. The provided templates are:
  + [Card Status Template](./resources/tmplstat.html)
  + [Transaction Template](./resources/tmpltran.html)

### Installation

The application is built from source. The source files are present in the repository for convenient viewing.
In addition, a PAK archive containing all of the source files is available for transfer to your NonStop system.

| Repository File | NonStop File |
| -- | -- |
| macros/build.txt | build |
| macros/instsvc.txt | instsvc |
| macros/setenv.txt | setenv |
| macros/startpw.txt | startpw |
| macros/stoppw.txt | stoppw |
| macros/unpakdat.txt | unpakdat |
| macros/unsetenv.txt | unsetenv |
| resources/acmeapi.txt | acmeapi |
| resources/acmeddl.txt | acmeddl |
| resources/acmedict.txt | acmedict |
| resources/acmesvc.txt | acmesvc |
| resources/datapak.bin | datapak |
| resources/logcfg.txt | logcfg |
| resources/sgapi.json | sgapi |
| resources/sgauth.txt | sgauth |
| resources/sgddl.txt | sgddl |
| resources/tmplstat.html | tmplstat |
| resources/tmpltran.html | tmpltran |
| resources/twapi.json | twapi |
| resources/twauth.txt | twauth |
| resources/twddl.txt | twddl |
| src/acct.c | acctc |
| src/acme.h | acmeh |
| src/card.c | cardc |
| src/lw.h | lwh |
| src/pay.c | payc |
| src/sg.h | sgh |
| src/tw.h | twh |

#### Transfer the PAK archive to your NonStop System

Download `acmepak.bin` from this repository to your local system, then upload to your NonStop server using binary transfer mode.

Note: to download the PAK file, click `acmepak.bin` in the file list to display the file details, then click the *Download row file* button.

Logon to TACL on your NonStop system to peform the installation and build steps.

#### Unpak the PAK archive
```
TACL > UNPAK ACMEPAK ($*.*.*), VOL $vol.subvol, LISTALL, MYID
```
#### Customize and run SETENV
After running SETENV, restart LightWave Server so that it will recognize the =ACME-PATHMON define.
```
TACL> T/EDIT SETENV
TACL> RUN SETENV
```
#### If using SMS notifications, customize the TWAUTH file.
```
TACL> T/EDIT TWAUTH
```

#### If using email notications, customize the SGAUTH file.
```
TACL> T/EDIT SGAUTH
```

#### Build the application DDL dictionary and servers
```
TACL > RUN BUILD
```
#### Install the LightWave Server service definitions
```
TACL > RUN INSTSVC
```
#### Optionally install the sample data
After installation, the application files are empty. This process will install sample data with one sample user and card.
```
TACL > RUN UNPAKDAT
```
#### Start the Pathway
```
TACL > RUN STARTPW
```
