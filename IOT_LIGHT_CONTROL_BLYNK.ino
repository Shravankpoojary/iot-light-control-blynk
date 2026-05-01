// 1. YOUR CREDENTIALS FROM THE SCREENSHOT
#define BLYNK_TEMPLATE_ID   "YOUR_TEMPLATE_ID"      // ← Replace with your Blynk Template ID
#define BLYNK_TEMPLATE_NAME "IOT LIGHT CONTROL"
#define BLYNK_AUTH_TOKEN    "YOUR_BLYNK_AUTH_TOKEN"  // ← Replace with your Blynk Auth Token

// 2. LIBRARIES (Updated for ESP8266)
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// 3. SETTINGS
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YOUR_WIFI_SSID";      // ← Replace with your WiFi name
char pass[] = "YOUR_WIFI_PASSWORD";  // ← Replace with your WiFi password

// On ESP8266 (like NodeMCU), GPIO 2 is labeled as 'D4'
const int relayPin = 2; 

// 4. BLYNK LOGIC
BLYNK_WRITE(V0) {
  int value = param.asInt();
  if (value == 1) {
    digitalWrite(relayPin, LOW); 
    Serial.println("Relay ON");
  } else {
    digitalWrite(relayPin, HIGH);
    Serial.println("Relay OFF");
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
  
  // Start with relay OFF
  digitalWrite(relayPin, HIGH); 

  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
