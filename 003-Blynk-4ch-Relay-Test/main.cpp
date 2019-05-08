#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

/* Make sure to replace with yours */
const char auth[] = "********";
const char ssid[] = "********";
const char pass[] = "********";

#define ESP32_GPIO1 5
#define ESP32_GPIO2 18
#define ESP32_GPIO3 19
#define ESP32_GPIO4 16

void setup() {
    Serial.begin(115200);
    Blynk.begin(auth, ssid, pass);

    pinMode(ESP32_GPIO1, OUTPUT);
    pinMode(ESP32_GPIO2, OUTPUT);
    pinMode(ESP32_GPIO3, OUTPUT);
    pinMode(ESP32_GPIO4, OUTPUT);
}

void loop() {
    Blynk.run();
}
