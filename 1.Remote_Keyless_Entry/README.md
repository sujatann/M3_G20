# Module 3- GETTING STARTED WITH ARM BASED MICROCONTROLLER.

## PROJECT TITLE: 1.REMOTE KEYLESS ENTRY(RKE).

---
## Table of content.
1. Abstract and Introduction.
    
    1. Requirements.
    1. High level requirements.
    1. Low level requirements.
    1. 5W's & 1H and S.W.O.T analysis.
2. Architecture.
     1. Structural diagram.
     1. Behavioural diagram.
     1. Flowchart.

3. Implementation.
4. Test plan and output.
     1. HIGH LEVEL TEST PLAN.
     2. LOW LEVEL TEST PLAN.
5. Application.
6. References.
---
# REMOTE KEYLESS ENTRY(RKE).

# 1.Abstract and Introduction :
# 1.1 Abstract.
Remote keyless entry (RKE) has captivated automobile buyers, as evidenced by the popularity of RKE on new automobiles and as an after-market item. This application note provides an overview of RKE systems and discusses how they meet requirements such as range, battery life, reliability, cost, and regulatory compliance. It shows some circuits and design approaches and offers some predictions for future systems, which will include two-way communications.

# 1.2 Introduction.
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock. Typically, the action is to press a button on a physical fob or mobile app.Remote keyless entry, which is commonly used to protect vehicles from theft, can be contrasted with passive keyless entry (PKE), which does not require any action on the part of the end user.Other than controlling locks, RKE systems for cars can be used to control the vehicle's ignition system, security alarm, horn, lights and trunk. RKEs are also used to control entry to premises and specific areas of buildings, such as garages.

# 1.3 Identifying features of the System:
1. The system shall automatically lock the car door by pressing the button "once".
2. The system shall automatically unlock the car door by pressing the button "twice".
3. The system shall activate/deactivate the alarm by pressing the button "three times".
4. The system shall approach the light by pressing the button "four times".




# 1.4 Requirements
## 1.4.1 HIGH LEVEL REQUIREMENTS.
| ID | HIGH LEVEL REQUIREMENTS |
|----|-------------------------|
| HLR1 | The system shall lock the door.|
| HLR2 | The system shall unlock the door.|
| HLR3 | The system shall activate/deactivate the alarm|
| HLR4 |The system shall be able to appraoch the light|


## 1.4.2 LOW LEVEL REQUIREMENTS.
| ID | HIGH LEVEL REQUIREMENTS |
|----|-------------------------|
| LLR1.1_HLR1 | The system shall turn on all the LED's at the same time.|
| LLR2.1_HLR2 | The system shall turn off all the LED's at the same time.|
| LLR3.1_HLR3 | The system shall turn on all the LED's at the same time in clock-wise direction.|
| LLR3.2_HLR3 | By this action it indicates alarm activation/deactivation. |
| LLR4.1_HLR4 | The system shall turn on all the LED's at the same time in anti=clockwise direction.|
| LLR4.2_HLR4 | By this action it indicates the approach of light. |

## 1.5 SWOT ANALYSIS.
![SWOT](https://user-images.githubusercontent.com/46914341/157850214-50fa70ac-3275-4bc7-9f05-31529df531df.PNG)

## 1.6 5W's and H
![wh](https://user-images.githubusercontent.com/46914341/157852408-9a0aac33-1e1e-4190-9f0e-55f67aaf45a1.PNG)


# 2.Architecture.
## 2.1 Behavioural diagram.
![cdd](https://user-images.githubusercontent.com/46914341/157890775-bc63dbed-3ea8-4056-af38-1a4a7bd085e4.PNG)

## 2.2 Structural diagram.
![WW2](https://user-images.githubusercontent.com/46914341/157890918-be58ceae-c5e6-46a8-a2b6-4e37ab1df624.PNG)
## 2.3 FLOWCHART.
![image](https://user-images.githubusercontent.com/46914341/157893795-9f6d42f3-befa-4ce0-ac1a-18d5d353b218.png)

#  3. Implementation.
* To write the required codes for the system taking all the tasks it has to perform.



# 4.Test plan.
## 4.1 HIGH LEVEL TEST PLAN
| TEST ID | DESCRIPTION | EXPECTED OUTPUT | ACTUAL OUTPUT | REMARK |
|--------|-------------|-----------------|---------------|--------|
| 01 |  To LOCK the car door |Shall be able to lock the door of the car|Shall be able to lock the door of the car| Pass |
| 02 |  To UNLOCK the car door |Shall be able to unlock the door of the car|Shall be able to unlock the door of the car| Pass|
| 03 |  To ACTIVATE/DEACTIVATE the alarm |Shall be able to activate/deactivate the alarm|Shall be able to  activate/deactivate the alarm| Pass|
| 04 | To APPROACH LIGHT | Shall be able to turn on the approach light |   Shall be able to turn on the approach light |Pass|

## 4.2 LOW LEVEL TEST PLAN
| TEST ID | DESCRIPTION | EXPECTED OUTPUT | ACTUAL OUTPUT | REMARK |
|---------|-------------|-----------------|---------------|--------|
| 01 |  Status of Door LOCK |All led's are turned on|All led's are turned on| Pass|
| 02 |  Status of Door UNLOCK |All led's are turned on|All led's are turned on| Pass |
| 03 |  Status of ACTIVATION/DEACTIVATION of the the alarm |All led's are turned off in clock wise direction|All led's are turned off in clock wise direction| Pass |
| 04 |  APPROACH LIGHT status | All led's are turned on in anti-clockwise direction|All led's are turned on in anti-clockwise direction| Pass |

# 5.APPLICATIONS of remote keyless entry.
Used in various fields such as;
1. Automobiles.
2. Audio and Broadcast.
3. Automotive.
4. Communications.
5. Computing.
6. Horticulture.
7. Industrial.
8. Instrumentation.
9. Medical.

# 6.REFERENCES.
1.To understand few related concepts.
https://www.mouser.in/applications/automotive-keyless-entry/#:~:text=Remote%20keyless%20entry%20systems%2C%20now,accessibility%20to%20a%20higher%20level.




