#ifndef DHT11_H_
#define DHT11_H_

#define DHT11_PIN 8

void setupDHT11();
float getTemperatureDHT11(void);
float getHumidityDHT11(void);

#endif
