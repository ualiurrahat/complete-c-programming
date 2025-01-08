// A macro is a preprocessor directive in C that defines a name or expression
// to be replaced with a specific value or code during compilation.
// It allows you to create constants or reusable code snippets using #define.
// Example: #define PI 3.14 replaces every occurrence of PI with 3.14 in the code.
// syntax: #define CONSTANT_NAME Value
#include <stdio.h>
#include <math.h>

// Define a macro for MIN with a value of -1
#define MIN -1
#
// Define a macro for PI using the formula 2 * acos(0), which calculates the mathematical constant PI
// PI is calculated using the formula 2 * acos(0):
// - acos(0) computes the angle in radians whose cosine is 0, which is π/2.
// - Multiplying π/2 by 2 gives the value of π.

#define PI (2 * acos(0))

int main()
{
    // Print the value of the MIN macro
    printf("Value of MIN: %d\n", MIN);

    // Print the value of the PI macro (double type value)
    printf("Value of PI: %lf\n", PI);

    return 0;
}
