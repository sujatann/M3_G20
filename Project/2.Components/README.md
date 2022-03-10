# 3.Components

## The main components are,
* Arduino Uno.
* Ultrasonic sensor Module.
* 16x2 LCD.
* Servo motor.


**Arduino Uno: Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online.

**Ultrasonic sensor Module: (The ultrasonic Sensor is considered to be a digital sensor because the microcontroller reads a digital signal from it.)
There are many types of Arduino distance sensors, but in this project we have used the HC-SR04 to measure distance in range of 2cm-400cm with an accuracy of 3mm. The sensor module consists of an ultrasonic transmitter, receiver and control circuit. The working principle of ultrasonic sensor is as follows:

* High level signal is sent for 10us using Trigger.
* The module sends eight 40 KHz signals automatically, and then detects whether pulse is received or not.
* If the signal is received, then it is through high level. The time of high duration is the time gap between sending and receiving the signal.

**LCD(Actuator): This display offers a way to interface your microcontroller to the outside world. It's one of the main output devices in your kit.

**Servo motor: A servomotor (or servo motor) is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback to control its motion and final position. The motor is attached with the sensor to find the distance range around the sensor for 1800 rotations. The motor is controlled and interfaced with Arduino microcontroller to rotate in clockwise and anticlockwise.