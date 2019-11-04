#include "joystick.h"
 #include <avr/io.h>

uint16_t readADC(uint8_t adcx) {
 //select ADC channel with safety mask
 ADMUX = (ADMUX & 0xF0) | (adcx & 0x0F);
 //single conversion mode
 ADCSRA |= (1<<ADSC);
 // wait until ADC conversion is complete
 while( ADCSRA & (1<<ADSC) );
 return ADC;
} 
