# ATtiny24/44/84, ATtiny25/45/85, and ATtiny2313/4313 core for Arduino IDE 2.0

This core adds full support for several ATtiny microcontrollers into
the Arduino IDE.

## WARNING! This version only works with IDE >= 1.8.15


### Installation

1) Close the IDE and, if you manually installed it in the past, remove the 
old core from your_sketchbook_folder/hardware

2) Restart the IDE, then select "File/Preferences" from the menu

3) Go to “Additonal Boards Manager URLs” and press the icon to the right
of the text area, then insert the following line into the pop-up window:
https://www.leonardomiliani.com/repository/package_leonardomiliani.com_index.json

4) Click OK twice, then go to “Tools/Board/Boards Manager”. Wait for a
couple of seconds for the boards manager to refresh the list of the additional
boards, then scroll the list until you find the following entries:
- Atmega168P/328P Boards by Leonardo Miliani version x.x.x
- Atmega644P/1284P Boards by Leonardo Miliani version x.x.x
- ATtiny 84/85/2313 Boards by Leonardo Miliani version x.x.x

5) Just select the core you want to install then press the corresponding
“Install” button. At the end of the installation the core will be set and
ready and the new boards will be available from “Tools/Board” without
the need to restart the IDE. Enjoy!

6) If you prefer to manually install the library (you'll loose the ability to automatically
update the software) you can download the ZIP and add it to your collection of libraries
just by installing it from "Sketch/Library inclusion/Library manager" and then choosing the ZIP file.

### Info

This core is a set of software that adds the support for the following ATtiny microcontrollers
into the Arduino environment. The Arduino IDE currently supports only some Atmel/Microchip ATmega processors and few others.
This core supports the tinyAVR Atmel family of microcontrollers, small DIP processors. With this core you
will be able to write programs for and flash the following MCUs: ATtiny24/44/84, ATtiny25/45/85, and
ATtiny2313/4313 processors.

For more informations on cores, libraries and other stuff for Arduino and Atmel
microcontrollers, see my website at: http://www.leonardomiliani.com
or my GitHub repos at: https://github.com/leomil72

### Credits & warranty

* The author of the Arduino Tiny Core (https://code.google.com/archive/p/arduino-tiny/)
* The user PaoloP of the Arduino forum that has given a consistent contribution by
  modifiyng several configuration files to let the IDE be able to incorporate the core Tiny with older versions, work reused for the following releases of this guide;
* BroHogan for his library TinyWire;
* Jack Christenses for his library tinyISP.

The core is released in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

### License

Released under the terms of the GNU Lesser General Public License version 2.1 (LGPLv2.1) or later
