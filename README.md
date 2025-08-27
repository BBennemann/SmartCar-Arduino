# SmartCar - Arduino Project

[![Arduino](https://img.shields.io/badge/Arduino-C++-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![C++](https://img.shields.io/badge/C++-blue?style=for-the-badge&logo=cplusplus)](https://isocpp.org/)

## About The Project

This repository contains the source code for an Arduino-based SmartCar, developed as a hands-on project to explore robotics and embedded systems. The car can operate in two different modes: autonomous navigation and remote control via Bluetooth.

The core of the project is an Arduino board that controls the motors using an H-Bridge, allowing for precise movement and direction changes.

## Project Versions

This repository is divided into two distinct versions, each located in its own folder. **For detailed instructions, specific hardware lists, and wiring diagrams, please see the `README.md` file inside each project folder.**

* **[Autonomous Mode (Ultrasonic Sensor)](/ultrasonic_smartcar)**: The car navigates autonomously, using an ultrasonic sensor to detect and avoid obstacles.
* **[Remote Control Mode (Bluetooth)](/bluetooh_smartcar)**: The car is controlled remotely from a smartphone or other device via a Bluetooth module.

## Assembly Video Tutorial

For a step-by-step guide on how to assemble the car chassis and wire the main components, you can watch this video tutorial:

**[Watch the Assembly Tutorial on YouTube](https://www.youtube.com/watch?v=MF-FqZn5e5M&list=WL&index=5)**

## General Hardware Components

This is a general list of all components used across both versions of the project.

* Arduino Uno (or a compatible board)
* Motor Driver (H-Bridge)
* 4x DC Motors (with wheels)
* Car Chassis
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* HC-05 or HC-06 Bluetooth Module
* Jumper Wires
* Power Source (e.g., battery pack)

## Contributors

* **Bernardo Thomas Bennemann** - *Project Owner* - [BBennemann](https://github.com/BBennemann)
