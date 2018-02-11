# DHT11/DHT22 on a Arduino Uno

This is a simple code shoing how to use the DHT11 or DHT22 Temperature and Humidity Sensor on a Arduino Uno.

## You will need

* [Arduino IDE](https://www.arduino.cc/en/main/software) 
* 01 Arduino Uno
* 3 Solderless Wires

## Import the Library

![Alt text](images/library.png?raw=true)

## Circuit

![Alt text](images/circuit.png?raw=true)
* VCC on 5V
* DATA on Pin 2 (or any other number you prefer)
* GND into any GND available

## Log

To see the feedback of the sensor go to:

![Alt text](images/serial-monitor.png?raw=true)

You may receive the following message:
* WARNING: library DHTlib claims to run on (atmelavr) archtecture(s) and may be incompatible with your current board which runs on (avr) architecture(s).
Check if the pin selected in the code is the one conected to the DATA pin on the breadboard and then go to the Serial Monitor. If the results are been displayed, then you have nothing to fear... If don't that means that the driver used is outdated or your DHT sensor is not compatible with this library.

## License

This project is licensed under the GLP v3.0 License - see the [LICENSE.md](LICENSE.md) file for details