# 2.Requirements.
## There are mainly two types of requirements;
1. High level requirements.
2. Low level requirements.

* Though both the types of requirements are more or less depended on each other while functioning, according to the need and usage they are termed as high and low level requirements.

## 2.1 High level requirements.
|   Id	   |          High level requirements.                              |
|----------|------------------------------------------------------------------|
|  HLR1	   | The system shall be used to find precise and fix measurement of low range distance.|
|  HLR2	   | The system shall be able to measure a distance of any obstacle. |
|  HLR3	   | The system shall be able to operate at the range of 2cm-400cm with an accuracy of 3mm.  |

## 2.2 Low level requirements.
|     Id	   |     Low level requirements.  |
|------------|------------------------------|
|  LLR1.1(for HLR1)	| Ultrasonic sensors generate high frequency sound waves and evaluate the echo which is received back by the sensor.|
|  LLR1.2(for HLR1)	|  calculates the distance depending upon the time taken by the echo signal to travel back after reflecting from the desired target.|
|  LLR2.1(For HLR2)	|The size of the object should be of the order of wavelength of signal for it to be detected. So object should not be very small.|
|  LLR2.2(For HLR2)	| The object should be placed near the rotational axis of transmitter.At wider angles less reflection takes place.|
|  LLR2.3(For HLR2)	| The object should be a good reflecting surface.|
|  LLR3.1(For HLR3)	|Sensors calculate the time interval between sending the signal and receiving the echo to determine the distance to an objectin the particular range of distance.|
|  LLR3.2(For HLR3)	| Make sure about provided range of operation because above the range of the specification provided it might won't provide accurate values.|


