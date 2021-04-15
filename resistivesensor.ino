#include <Thermistor.h>

Thermistor temp(0);

void setup() {
  Serial.begin(9600);
  }

void loop() {
  int temperature = temp.getTemp();
  Serial.print("Temperature");
  Serial.print(temperature);
  Serial.print("C");
  delay(1000);
  }
