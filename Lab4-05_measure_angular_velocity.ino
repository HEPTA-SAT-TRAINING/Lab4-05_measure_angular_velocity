#include "src/HeptaSat.h"

HeptaCdh    cdh;
HeptaEps    eps;
HeptaSensor sensor;

void setup() {
  cdh.begin();
  eps.init();
  sensor.begin();
}

void loop() {
  float gx, gy, gz;
  sensor.get_gyro(&gx, &gy, &gz);
  cdh.printf("Gyro: gx=%.2f deg/s, gy=%.2f deg/s, gz=%.2f deg/s\n", gx, gy, gz);
  delay(1000);
}
