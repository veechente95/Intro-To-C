// Create a blinking LED program

#include <wiringPi.h>
#include <stdio.h>
#define LedPin 0

int main(void) {
    wiringPiSetup();

    pinMode(LedPin, OUTPUT);

    while (1) {
        digitalWrite(LedPin, LOW);   // LED on
        printf("LED on...\n");
        delay(500);

        digitalWrite(LedPin, HIGH);   // LED off
        printf("LED off...\n");
        delay(500);
    }

    return 0;
}
