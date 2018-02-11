#include <dht.h> //Import the library of the sensor

dht DHT; //Initialize the sensor

#define dht_dpin 2 //Define here the pin number connected to DATA

void setup()
{
  Serial.begin(9600);
  delay(1000);//Wait 1 second to get information from the sensor
}

void loop()
{
  DHT.read11(dht_dpin); //To get data from the sensor
  Serial.print("Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print(" %  ");
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature); 
  Serial.println(" C  ");

  //Do not lower the value below. The ideal is to read every 2 seconds
  delay(2000);  
}
