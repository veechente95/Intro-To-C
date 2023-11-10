// Create a program that counts when the button is pressed

#include <wiringPi.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


#define ButtonPin 1

int counter = 0;
int currentState = 0;
int previousState = 0;

int main(void) {
    setenv("WIRINGPI_GPIOMEM", "1", 1);
    wiringPiSetup();

    pinMode(ButtonPin, INPUT);

    while (1) {
        currentState = digitalRead(ButtonPin);
        printf("People Counter\n");
        delay(500);

        if (currentState == LOW) {
            counter++;} 
        else {
            currentState = 1;}

        if (currentState != previousState) {
            if (currentState == 1) {
                printf("Button has been pressed: %d times\n", counter);
            }
        }

        previousState = currentState;
    }

    return 0;
}
