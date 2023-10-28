# Motor-LED-_NOR-GATE-ILLUSTRATION
This Repository illustrates a working system that can be implemeted using the NOR-GATE . The working results are elaborated when the LED - and Motor are turned up and down.
Below Shows the Hardware version and Software Version
# Arduino Motion Sensor LED Control
![image](https://github.com/RoggersAnguzu/Motor-LED-_NOR-GATE-ILLUSTRATION/assets/141458053/25c55159-2295-416a-8684-58a5b5b2635f)

![image](https://github.com/RoggersAnguzu/Motor-LED-_NOR-GATE-ILLUSTRATION/assets/141458053/7a66fb86-cc1f-48af-a5b3-969e4f4f54bc)

This project uses an Arduino to control an LED light using a motion sensor. The motion sensor and LED are connected to the Arduino, and the Arduino uses the motion sensor's input to control the state of the LED light.

## Overview

The Arduino reads the state of the motion sensor using the `digitalRead()` function. If the sensor detects motion, the Arduino turns on an LED light. If the sensor does not detect motion, the Arduino turns off the LED light.

The motion sensor and LED are connected to specific digital pins on the Arduino. The motion sensor's output is read from pins 3 and 4, and the LED is controlled by pins 5 and 6.

## Code Explanation

### Setup

In the `setup()` function, the digital pins connected to the motion sensor and LED are initialized using the `pinMode()` function. Pins 3 and 4 are set as INPUT to read the motion sensor's output, and pins 5 and 6 are set as OUTPUT to control the LED light.

The `Serial.begin(96000);` line initializes serial communication with a baud rate of 96000. This is used for debugging purposes and to print out the sensor's output to the serial monitor.

### Loop

In the `loop()` function, the Arduino reads the state of the motion sensor using the `digitalRead()` function. If the sensor detects motion (i.e., both pins 3 and 4 read LOW), the Arduino turns on the LED light by writing HIGH to pin 6. If the sensor does not detect motion, the Arduino turns off the LED light by writing LOW to pin 6.

The Arduino also controls a motor using pins 5 and 8. If the sensor detects motion, the Arduino turns on the motor by writing the maximum value (255) to pin 5. If the sensor does not detect motion, the Arduino turns off the motor by writing 0 to pin 5.

## How to Run

To run this project, you need an Arduino board, a motion sensor, an LED light, and a motor. Connect the motion sensor and LED light to the Arduino as described in the "Pinout" section below, and upload this code to the Arduino.

## Pinout

- Motion Sensor Output: Pins 3 and 4
- LED Control: Pin 6
- Motor Control: Pin 5

