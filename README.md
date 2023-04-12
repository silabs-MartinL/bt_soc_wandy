# Bluetooth - SoC Wandy

Connects to **Bluetooth - SoC Blinky** example (by name), checks service and characteristic, controls LED on blinky device using buttons or gestures detected by AI/ML.

## LEDs

* LED0 and LED1 (red/green) alternating:
  * No state
  * Error
* LED0 and LED1 (yellow) flashing: 
  * Scanning
  * Connected, checking service 
  * Connected, checking characteristic
* LED0 and LED1 (yellow) on:
  * Connected, ready to use
* LED0 (red) on:
  * Connected, off
* LED1 (green) on:
  * Connected, on

## Buttons

* BTN0: If connected, turn off
* BTN1: If connected, turn on 

## Instructions

2. Launcher, create **Bluetooth - SoC Empty** example
3. SLCP > Software Components > IO Stream > IO Stream: EUSART > Install > vcom
4. SLCP > Software Components > Utility > Log > Install
5. SLCP > Software Components > Simple LED > Install > led0, add instance: led1
6. SLCP > Software Components > Simple Button > Install > btn0, add instance btn1 
7. Github > copy app.c and app.h into project folder
8. Compile and run