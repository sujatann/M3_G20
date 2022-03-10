## Sensors.
1.Ultrasonic sensor :(The ultrasonic Sensor is considered to be a digital sensor because the microcontroller reads a digital signal from it.)

The sensor module used here is HC-SR04, which is a non-contact Ultrasonic measurement device. This small module is capable of measuring the distance within the range of 2cm – 400cm. It is a really accurate sensor, it can measure upto 3mm.

The sensor consists of Ultrasonic transmitter and Ultrasonic receiver. The working principle is really simple. Firstly, the IO trigger sends high level signal for 10μs. Then the sensor module sends eight 40 kHz cycle of ultrasonic sound and detect if the pulse signal is received back or not. And if the signal is received, through high level, the time duration by which the IO trigger stays high is the time from sending to receiving the signal.

Distance = (Time of High Level x Velocity of Sound in Air (340M/s))/2

It can  can be used to detect the door's position. For example, in refrigerators, a reed sensor is mounted to the frame of the appliance and a permanent magnet actuator is mounted to the door.

## Actuators.

1. LCD(Liquid Crystal Display) : 

LCD is a type of flat panel display which uses liquid crystals in its primary form of operation.Here we have used (hd444780) lcd display for displayong the distance that is measured.


2. Servo motor :

A servomotor is a rotary actuator / linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback. It also requires a relatively sophisticated controller, often a dedicated module designed specifically for use with servomotors. Servomotors are used in applications such as robotics, CNC machinery or automated manufacturing. A servomotor is a closed-loop servomechanism that uses position feedback to control its motion and final position. The motor is attached with the sensor to find the distance range around the sensor for 1800 rotations. The motor is controlled and interfaced with Arduino microcontroller to rotate in clockwise and anticlockwise.

