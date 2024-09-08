// http://www.avdweb.nl/arduino/libraries/fast-10-bit-adc.html

#include "avdweb_AnalogReadFast.h"
const byte adcPin = A1;

#if defined(__arm__)
analogReadResolution(12);
//analogReadResolution(10);
#endif

void setup(void)
{ Serial.begin(9600);
 int adc = analogRead(adcPin); // first analogRead may be wrong
}

void loop(void)
{ Serial.println(analogReadFast(adcPin));
}
