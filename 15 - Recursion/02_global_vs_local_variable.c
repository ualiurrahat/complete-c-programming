/*
Demonstrates the interaction between global and local variables
and their behavior when passed to a function in C.
 */

#include <stdio.h>

// Global variable declaration and initialization
int x = 1;

void myfnc(int y)
{
    y = y * 2;                               // Modify the local variable `y`.
    x = x + 10;                              // Update the global variable `x`.
    printf("myfnc, x = %d, y = %d\n", x, y); // Print updated values.
}

int main()
{
    int y = 5; // Local variable declaration and initialization.
    x = 10;    // Modify the global variable `x`.

    myfnc(y);                               // Call the function `myfnc` with `y` as an argument.
    printf("main, x = %d, y = %d\n", x, y); // Print values in the main function.

    myfnc(x);

    return 0; // Indicates successful program termination.
}
