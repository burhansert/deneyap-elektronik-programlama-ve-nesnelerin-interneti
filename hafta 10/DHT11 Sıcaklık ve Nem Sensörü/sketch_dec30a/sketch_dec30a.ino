#include <DHT.h>
DHT dht11(D0, DHT11);
float sicaklik, nem;

void setup() {
  Serial.begin(115200);
  dht11.begin();
}

void loop() {

  Serial.println(" Olcumler");

  sicaklik = (float)dht11.readTemperature();
  nem=(float) dht11.readHumidity();

  Serial.print("Sicaklik : ");
  Serial.println(sicaklik);
  Serial.print("Nem : ");
  Serial.println(nem);
  delay(1000);
}