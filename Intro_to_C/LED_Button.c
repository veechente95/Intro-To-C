// Create a program that allows you to turn on/off a LED using a button

#include <wiringPi.h>
#include <stdio.h>

#define LEDPin 0
#define ButtonPin 1

int main(void) {
    setenv("WIRINGPI_GPIOMEM", "1", 1);
    wiringPiSetup();

    pinMode(LEDPin, OUTPUT);
    pinMode(ButtonPin, INPUT);

    while (1)
    {
        digitalWrite(LEDPin, HIGH);   //LED is off
        if (digitalRead(ButtonPin) == 0) {
            digitalWrite(LEDPin, LOW);   //LED is on
        }
        {
            return 0;
        }   
    }
}
