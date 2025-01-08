#include <stdio.h>

// Define a macro to calculate the maximum of two values using the ternary operator.
// The ternary operator checks if 'a' is greater than 'b'; if true, it returns 'a', otherwise 'b'.
#define MAX(a, b) (a > b ? a : b)

int main()
{
    // Declare and initialize two integer variables
    int a = 83, b = 323;

    // Declare and initialize two double variables
    double d1 = 8.32323, d2 = 3.33332323;

    // Use the MAX macro to find the maximum of two integers (a and b)
    // The macro MAX(a, b) expands to (a > b ? a : b)
    printf("maximum of %d and %d is %d\n", a, b, MAX(a, b)); // Output: maximum of 83 and 323 is 323

    // Use the MAX macro to find the maximum of two doubles (d1 and d2)
    // The macro works for both integer and floating-point values, as C will implicitly handle the types.
    printf("maximum of %lf and %lf is %lf\n", d1, d2, MAX(d1, d2)); // Output: maximum of 8.32323 and 3.333323 is 8.323230

    return 0;
}
