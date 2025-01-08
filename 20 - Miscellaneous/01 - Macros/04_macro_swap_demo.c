#include <stdio.h>

// Define a macro to swap the values of two variables using XOR bitwise operation.
// The XOR swap method avoids using a temporary variable for swapping values.
#define SWAP(a, b) \
    {              \
        a ^= b;    \
        b ^= a;    \
        a ^= b;    \
    }

int main()
{
    // Declare two integer variables and initialize them
    int a = 83, b = 323;

    // Print the initial values of a and b
    printf("a = %d, b = %d\n", a, b);

    // Call the SWAP macro to swap the values of a and b
    SWAP(a, b);

    // Print the swapped values of a and b
    printf("a = %d, b = %d\n", a, b); // Output: a = 323, b = 83

    return 0;
}
