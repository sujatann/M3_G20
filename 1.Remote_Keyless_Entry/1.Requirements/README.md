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

