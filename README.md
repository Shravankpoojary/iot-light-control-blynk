# iot-light-control-blynk
### Minor Project | GlowLogics Solutions Pvt. Ltd. Internship 2025-26

A dual-module IoT implementation using the ESP8266 NodeMCU to perform real-time environmental sensing via ThingSpeak and secure remote device actuation through the Blynk IoT platform.

## Overview
A remote device control system that allows a user to switch 
an electrical load ON and OFF wirelessly from anywhere using 
the Blynk mobile application. The ESP8266 NodeMCU receives 
commands from the Blynk cloud and controls a relay module 
or LED accordingly.

## How It Works
1. User presses ON/OFF button on Blynk mobile app
2. Command is sent over internet to Blynk cloud platform
3. Blynk cloud identifies the device using Auth Token
4. Command is forwarded to ESP8266 NodeMCU
5. NodeMCU changes GPIO pin state to control relay or LED
6. Relay switches the connected appliance ON or OFF

## Hardware Required
- ESP8266 NodeMCU microcontroller board
- 5V Relay module OR 3V LED (for demonstration)
- Breadboard and jumper wires
- USB micro cable for programming and power
- Smartphone (Android or iOS)

## Wiring
| Component  | NodeMCU Pin     |
|------------|-----------------|
| Relay IN   | D4 (GPIO2)      |
| Relay VCC  | 5V (VIN)        |
| Relay GND  | GND             |

## Software Required
- Arduino IDE
- ESP8266 board core installed in Arduino IDE
- Blynk library for ESP8266
- Blynk mobile app (Android / iOS)

## Cloud Platform
- Blynk IoT — https://blynk.io
- Virtual Pin V0 → Controls relay ON/OFF

## Setup Instructions
1. Install Blynk app on your smartphone
2. Create a new template in Blynk Cloud Console
3. Add a Button widget linked to Virtual Pin V0
4. Copy your Auth Token and Template ID from Blynk Console

<p align="center">
  <img width="853" height="365" alt="Blynk Cloud Configuration" src="https://github.com/user-attachments/assets/c4ed38c1-5564-4e48-90db-68e1ec1323e4" />
  <br>
  <em>Figure 1: Blynk Cloud Console showing device configuration and Auth Token.</em>
</p>

<br><br>

<p align="center">
  <img width="422" height="433" alt="image" src="https://github.com/user-attachments/assets/1d76679c-d67f-4607-869e-2424e46496c2" />
  <br>
  <em>Figure 2: User Interface (UI) design on Blynk Mobile Application.</em>
</p> 


5. Open IOT_LIGHT_CONTROL_BLYNK.ino
6. Replace the following with your own credentials:
   - YOUR_TEMPLATE_ID → your Blynk Template ID
   - YOUR_BLYNK_AUTH_TOKEN → your Blynk Auth Token
   - YOUR_WIFI_SSID → your WiFi network name
   - YOUR_WIFI_PASSWORD → your WiFi password
7. Select board: NodeMCU 1.0 (ESP-12E Module)
8. Upload the code
9. Open Blynk app and press the button to control device


## Sytem Block Diagram representation
<p align="center">
  <img width="1691" height="656" alt="IoT Remote Control Block Diagram" src="https://github.com/user-attachments/assets/6d9e4b08-1891-4718-99f3-f609564b7b40" />
  <br>
  <em>Figure 3: Block diagram of the IoT-based Remote Device Control System illustrating communication between the Blynk App and the Relay module.</em>
</p>

## System setup snapshot
<img width="904" height="524" alt="image" src="https://github.com/user-attachments/assets/f7959228-5bc4-414a-b11c-d4af9fcb091f" />

              Figure 4: Prototype hardware setup featuring ESP8266 and 5V Relay Module.

## Expected Output
<img width="903" height="406" alt="image" src="https://github.com/user-attachments/assets/85ef2661-45f0-4543-90fc-7e9bd6777551" />

           Figure 5: Relay module in ON state indicating successful actuation via Blynk application



