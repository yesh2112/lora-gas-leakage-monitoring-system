#include <SPI.h>
#include <LoRa.h>
#include <DHT.h>

#define SS 5
#define RST 14
#define DIO0 26

#define MQ2_PIN 34
#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

unsigned long previousMillis = 0;
const long interval = 30000;   // 30 seconds

void setup() {
  Serial.begin(115200);
  dht.begin();

  LoRa.setPins(SS, RST, DIO0);

  if (!LoRa.begin(433E6)) {
    Serial.println("LoRa init failed!");
    while (1);
  }

  Serial.println("Gas + Temp + Humidity Node Ready");
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {

    previousMillis = currentMillis;

    int gasValue = analogRead(MQ2_PIN);
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    if (isnan(temperature) || isnan(humidity)) {
      Serial.println("Failed to read from DHT sensor!");
      return;
    }

    // ✅ Create JSON payload
    String jsonPayload = "{";
    jsonPayload += "\"gas\":" + String(gasValue) + ",";
    jsonPayload += "\"temperature\":" + String(temperature, 2) + ",";
    jsonPayload += "\"humidity\":" + String(humidity, 2);
    jsonPayload += "}";

    LoRa.beginPacket();
    LoRa.print(jsonPayload);
    LoRa.endPacket();

    Serial.println("Sent JSON: " + jsonPayload);
  }
}