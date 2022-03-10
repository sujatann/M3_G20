# Test plan and output.
• Testing
The measurement  repeatability  and  stability  over  time  are  important  for determining the size of errors and corrections’ calculation. 

## Assumptions:
* While working this project in hardware mode the output can be seen so clearly as we bring the object near or far from the sensor.
* Here in software mode i.e,in simulIDE also we can see the similar output by changing  the value of the variable the corresponding distance calculated also changes.

 ## HIGH LEVEL TEST PLAN/Unit test plan
| Test ID |	Description |	Input	| Expected Output|	Actual Output	|Passed/Not |
|---------|-------------|-----------|----------------|------------------|-----------|
| 1	| Distance | 2cm-400cm |The object is detected |	The object is detected	|Passed|
| 2	| Lcd display	| Distance measure |	Distance measure |	Distance measure|	Passed|
| 3	|Servo motor	|Rotates after detecting any object	|Rotates after detecting any object	|Rotates after detecting any object|	Passed|

## LOW LEVEL TEST PLAN/Unit test plan



| Test ID(for lcd) | Description	| Input	| Expected Output |	Actual output	| Passed/not|
|------------------|----------------|-------|-----------------|-----------------|-----------|
| 1	| Check for lcd (char) | Distance Measure |	Distance Measure |	Distance Measure |	Passed |
| 2 |Check for lcd (String)	| Circuit digest |	Circuit digest	| Circuit digest |	Passed |

---

| Test ID(for Ultrasonic sensor) | Description	| Input	| Expected Output |	Actual output | Passed/not |
|--------------------------------|--------------|-------|-----------------|---------------|------------|
| 1	| Check for lcd (char)	| Distance cm	| Distance cm	| Distance cm |	Passed |
| 2 | Check for lcd (String) |	Distance mm | Distance cm |	Distance cm	 | Passed |

# OUTPUT
 ##  SUBSYSTEM-1:Interfacing LCD WITH AURDINO
 ![image](https://user-images.githubusercontent.com/46914341/157223707-f9ac2d5f-e076-45d9-8e99-19cbda5aac39.png)
 
##  SUBSYSTEM-2:Interfacing ultrasonic sensor with Aurdino.
![image](https://user-images.githubusercontent.com/46914341/157223856-81780dc8-2ae3-4be9-9548-5b8b03bcfbef.png)

##  SUBSYSTEM-3:Interfacing Servo motor with Aurdino.
![image](https://user-images.githubusercontent.com/46914341/157223964-0fdfa1d2-9811-4775-88d2-5ec5bc51966a.png)

##  COMPLETE MODEL OF DISTANCE MEASUREMENT METER.
![image](https://user-images.githubusercontent.com/46914341/157224081-77605245-95ab-4cb6-918f-f7b209f54b3e.png)


