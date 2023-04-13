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

## Gestures

* L: If connected, turn on
* O: If connected, turn off

## Instructions

1. Launcher, create **Bluetooth - SoC Empty** example
2. SLCP > Software Components > IO Stream > IO Stream: EUSART > Install > vcom
3. SLCP > Software Components > Utility > Log > Install
4. SLCP > Software Components > Simple LED > Install > led0
   Add instance: led1
5. SLCP > Software Components > Simple Button > Install > btn0
   Add instance btn1 
6. SLCP > Software Components > TensorFlow Lite Micro > Install
   Configure > Tensor Arena Size = 8192
7. SLCP > Software Components > ICM20689 - Motion Sensor > Install
8. SLCP > Software Components > IMU - Device driver for InvenSense ICM-20689 > Install
9. SLCP > Software Components > IMU - Inertial Measurement Unit > Install
10. SLCP > Software Components > Board Control > Configure > Enable Inertial Measurement Unit = true
11. Github, copy the following files into the project folder:
    - accelerometer.cc/h
    - app.c/h
    - constants.h
    - magic_wand.cc/h
    - predictor.cc/h
12. Build (30m), compile, run