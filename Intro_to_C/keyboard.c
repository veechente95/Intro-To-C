//Create a program reads the number that comes from the keyboard input

#include <stdio.h>

int main()
{
  float age;
  printf("How old are you? ");
  scanf("%f", &age);   /* Read the number that comes from the keyboard input */
  printf("You are %f years old. \n", age);     /* Print the users input on the screen */
  return 0;
}

