#include <stdio.h>

int main(void) {
    /* Declare three integer variables */
    int x, y, z;
    printf("Enter two whole numbers, x and y, separated by a space: ");
    /* Read two values from the keyboard */
    scanf("%d %d", &x,&y);
    /* add the two values together and pass the result to z */
    z = x + y;
    printf("You gave me %d for x and %d for y\n %d + %d = %d\n", x,y,z);

   // Multiplication
   /* multiply x by 10 and then assign the result to x */
    x = x * 10;
    printf("The result of x * 10 is: %d\n ", x);

    return (0);
}