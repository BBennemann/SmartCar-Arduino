# Autonomous SmartCar (Ultrasonic Sensor)

This version of the SmartCar is programmed to navigate its environment autonomously, detecting and avoiding obstacles in its path.

## How It Works

The car uses an HC-SR04 ultrasonic sensor mounted on an SG90 servo motor. The servo allows the sensor to "look" left and right. The operational logic is as follows:
1.  The car moves forward.
2.  The ultrasonic sensor continuously measures the distance to objects in front.
3.  If an object is detected within a certain threshold (e.g., 20 cm), the car stops.
4.  The servo motor scans left and right to measure the distance on both sides.
5.  The car turns towards the direction with the most open space and continues moving forward.

## Hardware Required

* Arduino Uno (or a compatible board)
* Motor Driver (H-Bridge)
* Car Chassis with 4x DC Motors and wheels
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* Jumper Wires
* Power Source

## Setup and Wiring

Below is a placeholder for the circuit diagram and a list of the main pin connections.

**[Insert an image of your wiring diagram here]**
*Example: `![Wiring Diagram](circuit.png)`*

### Key Pin Connections:
* **L298N Motor Driver:**
    * `IN1`, `IN2`, `IN3`, `IN4` to Arduino digital pins.
* **HC-SR04 Sensor:**
    * `VCC` to 5V
    * `GND` to GND
    * `Trig` to an Arduino digital pin.
    * `Echo` to another Arduino digital pin.
* **SG90 Servo Motor:**
    * `Signal` (Orange wire) to an Arduino PWM pin (e.g., ~9).
    * `VCC` (Red wire) to 5V.
    * `GND` (Brown wire) to GND.

## How to Use

1.  Assemble the circuit according to the diagram.
2.  Open the `SmartCar_distancia.ino` file in the Arduino IDE.
3.  Ensure the `Servo.h` library is included (it is a standard library).
4.  Compile and upload the code to your Arduino board.
5.  Power on the car and it will begin to move autonomously.
