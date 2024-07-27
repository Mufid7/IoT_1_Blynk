# Arduino LED Simulation

This project simulates an Arduino Uno R3 controlling an LED with a 220 Ohm resistor using Tinkercad.

## Table of Contents
- [Overview](#overview)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Code](#code)
- [How to Run](#how-to-run)
- [References](#references)
- [License](#license)

## Overview
This project demonstrates how to use an Arduino Uno R3 to control an LED with a 220 Ohm resistor in a simulation environment using Tinkercad. It is intended for beginners who are learning about Arduino and basic electronics.

## Components
- Arduino Uno R3
- LED
- 220 Ohm resistor
- Breadboard
- Jumper wires

## Circuit Diagram
The circuit connects the LED to the Arduino through a 220 Ohm resistor. The positive leg (anode) of the LED is connected to a digital pin on the Arduino, and the negative leg (cathode) is connected to the ground (GND) through the resistor.

![Circuit Diagram](images/circuit-diagram.png)

## Code
The Arduino code to control the LED is provided in the `code` directory. The code blinks the LED on and off at 1-second intervals.

```cpp
/*
  Blink
  Turns an LED on for one second, then off for one second, repeatedly.
*/

// Pin connected to the LED
const int ledPin = 2;

// Setup runs once when the program starts
void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

// Loop runs repeatedly after setup
void loop() {
  // Turn on the LED
  digitalWrite(ledPin, HIGH);
  
  // Wait for 1.5 seconds (1500 milliseconds)
  delay(1500);
  
  // Turn off the LED
  digitalWrite(ledPin, LOW);
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);
}
