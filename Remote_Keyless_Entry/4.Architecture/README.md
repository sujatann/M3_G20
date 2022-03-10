## ARCHITECTURE:
# DESIGN;

## BLOCK DIAGRAM..

![BD](https://user-images.githubusercontent.com/46914341/157050047-47e2be8e-0b47-4b21-8979-0de5bd0cc812.PNG)
* The above figure gives the overall idea about how the system is arranged in the form of block diagram.


In this project distance of the object is measured through ultrasonic distance sensor and the sensor output is connected to signal conditioning unit and after that it is processed through Arduino microcontroller. The measured results are displayed in liquid crystal display. The results are transferred to personal computer. The sensor is attached to servo motor to find the polar distance around the sensor upto 1800 rotations. This application is also used to find the obstacles detection and the exact distance can also be obtained. The measured distance is displayed on the LCD display. 

![hardware](https://user-images.githubusercontent.com/46914341/157051582-0da52b17-d95a-4235-984d-caaa258a8eb4.png)
* Fig 4.1.2The above figure shows hoe the each of the components are connected to each other.

## Structural diagrams.

![flow](https://user-images.githubusercontent.com/46914341/157058453-d177ddd8-4a13-4ec6-b71f-e8ebecfd571f.PNG)
* The above figure also explains about how the blocks are arranged with respect to each other.

Block diagram of the working principle of an ultrasonic radar As shown in the above Fig, Arduino UNO receives power supply from the computer. Then microcontroller sends signals to the other two components: the ultrasonic sensor and servo motor. The feedback from these components is sent back to the microcontroller. The ultrasonic sensor has a transmitter to send out the ultrasound and a receiver to catch the reflected sound waves. The total travelling time of this sound wave is the distance.


 ## Flowcharts.
 
 ![flowchart](https://user-images.githubusercontent.com/46914341/157056917-ce29cf9e-ab7d-4947-b2a2-a697c4cf2afa.PNG)
*  Flowchart of the Ultrasonic Distance meter.

The ultrasonic sensor emits a high-frequency sound pulse and calculates the distance depending upon the time taken by the echo signal to travel back after reflecting from the desired target. The speed of sound is 341 meters per second in air. After the distance is calculated, it will be displayed on the LCD display

##  Sub-systems.
![behavioural](https://user-images.githubusercontent.com/46914341/157076594-90d1f15e-3295-4baf-ab2d-0018fa04d414.png)
* Schematic diagram of Ultrasonic Distance Meter.