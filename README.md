# ECE 528/L - Robotics and Embedded Systems with Lab
**CSU Northridge**

**Department of Electrical and Computer Engineering**

## Lab 3: Line Follower
### Thomas Anderson / Abraham Santiago
---
<details><summary>The Line Follower lab interfaces with the following:</summary>

* 8-Channel QTRX Sensor Array - [Product Link](https://www.pololu.com/product/3672)
* Reading the Reflectance Sensor
* Reflectance Senor Pinout
* Line Maze Possibilities
* Finite State Machine (FSM)
</details>

<details>
<summary><h2>Prelab Questions</h2></summary>

1. <b>Write a void function named Chassis_Board_LEDs_Init that takes no arguments and initializes the following pins as output GPIO pins. Initialize the value of the pins to zero.</b>  
```
void Chassis_Board_LEDs_Init()
{
P8->SEL0 &= ~(0xE1);
	P8->SEL1 &= ~(0xE1);
	P8->DIR |= 0xE1;
	P8->OUT &= ~(0xE1);
}
```  

2. <b>Write a void function named Print_Tenth that takes no arguments</b>    
(Included as file in repository.)
</details>

<details>
<summary><h2>Overview</h2></summary>

This lab serves as an introduction to show how a 8-Channel QTRX Sensor Array module can be used on the car to complete a line maze course using a finite state machine (FSM).
</details>

<details>
<summary><h2>Components</h2></summary>
  
<b>Description</b> | <b>Quantity</b> | <b>Manufacture</b>
--- | --- | ---
MSP432 LaunchPad | 1 | Texas Instruments
USB-A to Micro-USB Cable | 1 | N/A
TI-RSLK MAX Chassis | 1 | Pololu
8-Channel QTRX Sensor Array | 1 | Pololu
Black Tape (1-inch or ¾-inch) | 1 | N/A
</details>



<details>
<summary><h2>Theory</h2></summary>

<b>Key Concepts</b>
---

<details>
<summary><b>Line Follower</b></summary>

This lab is primarily about using the reflective sensor array to detect a line. The eight sensors in the array each independently send data to the reflectance of the ground below it. Which allows for a program to identify where the line is in relation to the device and uses the information to modify the direction of travel using a FSM. The reflectance sensor array will be reading every 10ms and the will finish reading after 1ms. With the reflectance sensor array reading every so often we do not need anything in the main.c while() loop.

</details>

</details>

<details>
<summary><h2>Analysis and Results</h2></summary>
During the procedure in the previous lab using the reflectance sensors we used the polling method. For this lab we used the reflectance sensors again but this time we wanted to read the output of the module more efficiently so we used the periodic task. When completing the task for the robot to follow the line we followed the design requirements. When letting the robot run we had to constantly change the PWM duty cycle values for the motors so it did what we wanted to and not over shoot or under shoot the line depending on the requirements. We were able to implement it and demonstrate it working to the professor.

</details>

<details>
<summary><h2>Know Issues or Limitations</h2></summary>

We gained a thorough understanding of all the concepts in the lab and successfully demonstrated the entire lab working without bugs.    
<b>This lab was a complete success.</b>
</details>

<details>
<summary><h2>Author Contribution</h2></summary>

We both completed every component of the lab and worked on the report together.    
</details>

<details>
<summary><h2>References</h2></summary>

[MSP432P401R SimpleLink Microcontroller LaunchPad Development Kit User's Guide](https://docs.rs-online.com/3934/A700000006811369.pdf)

[MSP432P401R Datasheet](https://www.ti.com/lit/ds/slas826e/slas826e.pdf)

[Robot Systems Learning Kit (TI-RSLK) User Guide](https://www.ti.com/lit/pdf/sekp166) 

