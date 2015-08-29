# WifiPixels
WifiPixels are a combination of a ESP8266 Wifi unit combined with a NeoPixel LED ring all in one.

# Updating Firmware
* Follow the instructions from Adafruit on how to install the ESP8266 Board definitions in Arduino. https://learn.adafruit.com/adafruit-huzzah-esp8266-breakout/using-arduino-ide
* Put the board into bootloader mode by holding the BOOT button and pressing the RESET button. The RED indicator led should stay on at half brightness indicating that the device is in Bootloader mode.
* Press the Arduino upload button to flash the device. 

# QuickSetup [Wifi Client]

Easy way to connect an ESP8266 IOT device to a Wifi Network.

* When the device is powered the first time, it will start as an Access Point called "WifiPixels". (IP:192.168.4.1)
* The Access Point can be connected too, from the above IP the device can be connected to a Wifi Network as a Client
* On the first connection as a client the Access Point will be switched off.
* Should the Wifi Connection fail after 3 attempts, the unit will go in recovery mode and switch back to an Access Point. From where it can be connected to a network again.

External Libs Needed:
* https://github.com/esp8266/Arduino - Arduino Board definitions making it possible to program ESP8266 boards from the Arduino IDE.
* https://github.com/Imroy/pubsubclient - MQTT Client Library to remotely communicate with devices
* https://github.com/Makuna/NeoPixelBus - Library to control NeoPixel RGB Addressable Led's
