#include <stdio.h>

// a function with no return value
void fun(int, int *);
int main() {
    int np = 1, p = 1;  //initialize 2 int variables
    printf("%np=%p, p=%p\n" , &np, &p);  //print address
    printf("Before fun (): %np=%d, p=%d\n" , np, p);    // print the values
    fun(np, &p);    // pass the values of np and the address of p
    return 0;   // return success
}

void fun(int np, int *p) {
    np = 2;   // assign 2 to the local variable np
    *p = 2;   // assign 2 to the memory of p defined in main
    printf("%np=%p, p=%p\n" , &np, p);   // print the address
}
