#include <dht.h>

#define dataPin 8
dht DHT; // Creats a DHT object

float DHT_Sensor_temp()
{
  int readData = DHT.read22(dataPin); // Reads the data from the sensor  
  return DHT.temperature; // Gets the values of the temperature
}

float DHT_Sensor_hum()
{
  int readData = DHT.read22(dataPin); // Reads the data from the sensor
  return DHT.humidity; // Gets the values of the humidity
}
