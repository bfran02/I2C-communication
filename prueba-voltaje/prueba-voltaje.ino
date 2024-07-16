#include <Adafruit_INA219.h>

#define INA219_ADDRESS 0x40

Adafruit_INA219 ina219(INA219_ADDRESS);

void setup() {
  Serial.begin(9600);

  ina219.begin();
}

void loop() {
  float current = ina219.getCurrent_mA();
  float voltage = ina219.getBusVoltage_V();
  float power = ina219.getPower_mW();

  Serial.print("Corriente: ");
  Serial.print(current);
  Serial.println(" mA");

  Serial.print("Tensión: ");
  Serial.print(voltage);
  Serial.println(" V");

  Serial.print("Potencia: ");
  Serial.print(power);
  Serial.println(" W");

  delay(1000);
}

