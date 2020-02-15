# Micro-Nav-Lights-Controller
Use your RC Receiver for controlling navigation light, a ultra bright spot light and your FPV camera.

# moved to https://git.mosad.xyz/localhorst/Micro-Nav-Lights-Controller

#### Fast overview: Video will come soon.

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi//0.jpg)]
(https://www.youtube.com/watch?v=)

## 1.Hardware:
-	Atmel Attiny 13A PU
-	5x ultra bright 3mm led, red and green
-	8x ltra bright 3mm led, white
- 3x Transistor 2N3904
- Elko 25V 100µF
- Socket for Attiny
- Some servo wires
- A hackable fpv camera with hybrid ir lens

## 2.Software:
-	get your isp-programmer (ex. USBasp) working, linux is your friend
-	install latest Arduino IDE and drivers
- install the MicroCore https://github.com/MCUdude/MicroCore
- enable #define ENABLE_MICROS in avr/cores/microcore/core_settings.h

## 3.Libraries used in this project:
-	none.

### Installation: 
1. prepare Hardware. Ground to Ground and the rest like the schematics (comming soon).
2. Upload the sketch to the Arduino with the ISP-Programmer.
3. Set the switches on your RC control for the two channels.
7. Power everything up.
8. Enjoy your Micro-Nav-Lights-Controller.

Bug and Features: Please report bugs and wishes to me. Thanks!


