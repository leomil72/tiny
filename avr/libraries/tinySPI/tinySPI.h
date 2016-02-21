/*-------------------------------------------------------------------------*
 * tinySPI.h - Arduino hardware SPI master library for ATtiny24/44/84,     *
 * ATtiny25/45/85, and Attiny2313/4313.                                    *
 *                                                                         *
 * Original version of tinyISP by Jack Christensen 24Oct2013               *
 *                                                                         *
 * Added support for Attiny24/25, and Attiny2313/4313                      *
 * by Leonardo Miliani 28Nov2014                                           *                          
 *                                                                         *
 * CC BY-SA-NC:                                                            *
 * This work is licensed under the Creative Commons Attribution-           *
 * ShareAlike- Not Commercial 4.0 Unported License. To view a copy of this *
 * license, visit                                                          *
 * http://creativecommons.org/licenses/by-sa/4.0/ or send a                *
 * letter to Creative Commons, 171 Second Street, Suite 300,               *
 * San Francisco, California, 94105, USA.                                  *
 *-------------------------------------------------------------------------*/
 
#ifndef tinySPI_h
#define tinySPI_h

#include <stdint.h>
#include <avr/io.h>
#include <util/atomic.h>

//USI ports and pins
#if defined(__AVR_ATtiny24__) || defined(__AVR_ATtiny44__) || defined(__AVR_ATtiny84__)
#define SPI_DDR_PORT DDRA
#define USCK_DD_PIN DDA4
#define DO_DD_PIN DDA5
#define DI_DD_PIN DDA6
#elif defined(__AVR_Ttiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)
#define SPI_DDR_PORT DDRB
#define USCK_DD_PIN DDB2
#define DO_DD_PIN DDB1
#define DI_DD_PIN DDB0
#elif defined (__AVR_ATtiny2313__) || defined(__AVR_ATtiny4313__)
#define SPI_DDR_PORT DDRB
#define USCK_DD_PIN DDB7
#define DO_DD_PIN DDB6
#define DI_DD_PIN DDB5
#endif

//SPI data modes
#define SPI_MODE0 0x00
#define SPI_MODE1 0x04

class tinySPI
{
    public:
        tinySPI();
        void begin(void);
        void setDataMode(uint8_t spiDataMode);
        uint8_t transfer(uint8_t spiData);
        void end(void);
};

extern tinySPI SPI;

#endif