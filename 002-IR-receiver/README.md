
# TTGO ESP32 PROJECT
This example shows how to read the signals of each button on the infrared remote control and display on OLED using the TTGO. 

## Hardware

This is wiring between TTGO and IR Receiver.
Connect the TTGO (ESP32) to the sensor module that can read infrared signals.

| IR Receiver Module | TTGO (ESP32) |
| ------------- | ------------- |
| PWR  | 5V  |
| DATA OUT  | GPIO12  |
| GND  | GND |

## Dependancy
We will use the open source library below to read and interpret IR signals
https://github.com/z3t0/Arduino-IRremote

