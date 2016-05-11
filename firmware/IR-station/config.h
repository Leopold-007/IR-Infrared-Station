/*
   config.h
*/
#ifndef CONFIG
#define CONFIG


/* Hardware Mapping */
#define IR_IN                   (5)
#define IR_OUT                  (14)
#define Indicate_LED            (15)
#define ERROR_LED               (16)


/* Software */
// for Remocon
#define IR_CH_SIZE              (25)

// SPIFFS saving path
#define IR_DATA_PATH(i)         ("/data/" + String(i,DEC) + ".txt")
#define SETTINGS_DATA_PATH      ("/settings.txt")

// SSID & Password of ESP8266 Access Point Mode
#define SOFTAP_SSID             "IR-Station"
#define SOFTAP_PASS             ""

// WiFi connection Timeout
#define WIFI_CONNECT_TIMEOUT    (10) // seconds

// http://MDNS_ADDRESS_DEFAULT.local
#define MDNS_ADDRESS_SETUP      "setup"
#define MDNS_ADDRESS_DEFAULT    "ir"

// OTA update
#define USE_OTA_UPDATE          true

#if USE_OTA_UPDATE == true
#define OTA_HOSTNAME            "ir-station"
#define OTA_PASSWORD            "1234"
#endif

/* for Debug */
#define SERIAL_DEBUG            true

#if SERIAL_DEBUG == true
#define print_dbg               Serial.print
#define printf_dbg              Serial.printf
#define println_dbg             Serial.println
#else
#define print_dbg               // No Operation
#define printf_dbg              // No Operation
#define println_dbg             // No Operation
#endif

#endif

