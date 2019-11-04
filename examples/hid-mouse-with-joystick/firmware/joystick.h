 #pragma once
 #include <stdint.h>

 
/* Which analog pin we want to read from.  The pins are labeled "ADC0"
 * "ADC1" etc on the pinout in the data sheet.  In this case ADC_PIN
 * being 0 means we want to use ADC0.  On the ATmega328P this is also
 * the same as pin PC0 */
#define ADC_PIN_X			PC0
#define ADC_PIN_Y			PC1

/* The ADC value we will consider the cutoff point for turning the LED
 * on or off.  The ADC we are using is 10-bits so can be a value from
 * 0 to 1023.  The value 0 means that there is no voltage on the ADC pin
 * and the value 1023 means the voltage has reached the voltage on the 
 * AREF pin. */
#define ADC_THRESHOLD	512
#define ADC_ZERO_RANGE	150

/* This function just keeps the reading code out of the loop itself.
 * It takes the analog pin number as a parameter and returns the
 * analog reading on that pin as a result.
 *
 * Look for its definition below main. */
uint16_t readADC(uint8_t adcx);

