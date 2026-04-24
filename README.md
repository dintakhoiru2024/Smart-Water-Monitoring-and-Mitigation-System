# Smart Water Monitoring & Mitigation System 🌊🔋

This project is an Arduino-based water management simulation designed to monitor water levels in real-time and provide automated mitigation responses. It features a dynamic pumping system, an automated emergency gate, and a visual alert system to prevent overflow conditions. The entire system was developed and tested using the Tinkercad simulation environment.

---

## 🚀 Key Features:
1. System Power Control: On/Off toggle functionality via a physical push button with debounce protection.
2. Real-Time Monitoring: 16x2 I2C LCD displays live water level percentage and system status.
3. Adaptive Pumping: DC Motor speed is automatically regulated using PWM mapping based on the current water level.
4. Automated Mitigation Gate: High-torque Micro Servo acts as a floodgate, opening automatically when levels exceed 80%.
5. Emergency Alert System: Integrated Red LED that activates during critical water levels to provide a visual warning.
6. External Power Integration: Uses a dedicated 9V battery to ensure stable operation of the high-current motor and servo components.

---

## 🛠️ Hardware Used:
1. Arduino Uno R3 / compatible board
2. LCD 16x2 with I2C Module (0x27)
3. DC Hobby Gearmotor (Water Pump Simulation)
4. Positional Micro Servo (Mitigation Gate)
5. NPN Transistor (BJT) as Motor Driver
6. Potentiometer (Water Level Sensor Simulation)
7. Push Button (System Control)
8. LED Red (Danger Indicator)
9. Resistors (220 Ohm & 1k Ohm)
10. 9V Battery (External Power Supply)

---

## 📋 Pin Configuration 
No,Component / Function,Arduino Pin,Type,Description
1,ON/OFF Button,D2,Digital Input,Main system power toggle (with debounce).
2,Red LED (Alarm),D13,Digital Output,Visual alert indicator for critical water levels (>= 80%).
3,Potentiometer,A0,Analog Input,Simulates water level sensor (Input range: 0-1023).
4,NPN Transistor (Pump),D6 (PWM),PWM Output,Controls motor speed via Base Resistor using PWM signals.
5,Micro Servo,D9,PWM Output,"Actuates the emergency floodgate (0° Closed, 90° Open)."
6,LCD I2C SDA,A4,I2C Data,Serial Data line for LCD communication.
7,LCD I2C SCL,A5,I2C Clock,Serial Clock line for LCD communication.
8,LCD Display,0x27,I2C Module,16x2 character display for monitoring and status.

---

## 🏗️ Operational Workflow:
1. The Arduino system initializes the LCD, Servo, and Pin configurations upon power-up.
2. The system starts in Standby Mode until the ON/OFF button (D2) is pressed.
3. The Potentiometer (A0) is used to simulate the water level, mapped from 0% to 100%.
4. The LCD displays the current water level and operational status in real-time.
5. Normal Range (< 80%): The motor runs at a speed proportional to the water level, the Servo remains at 0° (Closed), and the LED is OFF.
6. Danger Range (>= 80%): The system enters mitigation mode; the Servo moves to 90° (Open), the Red LED turns ON, and the LCD warns of a "BAHAYA" status.
7. Pressing the ON/OFF button again will immediately halt all operations and clear the display.

---

## 📁 Dokumentasi File
a. Source Code: Code.ino
b. Component List: Component_List.csv
c. Circuit Schematic: 3D Schematics.png
d. Simulation Video: Watch Here

---
## 👨‍💻 Developed By
**Dinta Khoiru Sanata**
