# SmartCar - Arduino Project

[![Arduino](https://img.shields.io/badge/Arduino-C++-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![C++](https://img.shields.io/badge/C++-blue?style=for-the-badge&logo=cplusplus)](https://isocpp.org/)

## About The Project

This repository contains the source code for an Arduino-based SmartCar, developed as a hands-on project to explore robotics and embedded systems. The car can be controlled in two different modes, each located in its own folder: autonomous navigation using an ultrasonic sensor and remote control via a Bluetooth module.

The core of the project is an Arduino board that controls the motors using an L298N H-Bridge, allowing for precise movement and direction changes.

## Project Versions

This repository includes two distinct operational modes for the SmartCar:

### 1. Autonomous Mode (Ultrasonic Sensor)
* **Folder:** `SmartCar_distancia/`
* **Description:** In this mode, the car navigates its environment autonomously. It uses an HC-SR04 ultrasonic sensor mounted on a servo motor to scan for obstacles. When an obstacle is detected, the car stops, looks left and right to find the clearest path, and then proceeds, effectively avoiding collisions.

### 2. Remote Control Mode (Bluetooth)
* **Folder:** `SmartCar_bluetooth/`
* **Description:** This version allows for direct control of the car from a smartphone or any other Bluetooth-enabled device. It uses an HC-05 or HC-06 Bluetooth module to receive commands, giving the user full remote control over the car's movements (forward, backward, left, and right).

## Hardware Components

To build this project, you will need the following components:

* Arduino Uno (or a compatible board)
* L298N Motor Driver (H-Bridge)
* 2x DC Motors (with wheels)
* Car Chassis
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* HC-05 or HC-06 Bluetooth Module
* Jumper Wires
* Power Source (e.g., battery pack)

## How to Use

1.  **Choose a Version:** Select the mode you want to implement (`SmartCar_distancia` for autonomous or `SmartCar_bluetooth` for remote control).
2.  **Assemble the Circuit:** Connect the components to the Arduino board according to the wiring diagram for the chosen version. *(Note: It would be beneficial to add circuit diagrams to the repository)*.
3.  **Upload the Code:** Open the `.ino` file from the corresponding folder in the Arduino IDE.
4.  **Install Libraries:** Make sure you have any necessary libraries installed (e.g., `Servo.h` is standard, but others might be needed).
5.  **Compile and Upload:** Compile the code and upload it to your Arduino board.
6.  **Power On:** Power the circuit and the SmartCar will start operating in the selected mode.

## Contributors

* **Bernardo Thomas Bennemann** - *Project Owner* - [BBennemann](https://github.com/BBennemann)
