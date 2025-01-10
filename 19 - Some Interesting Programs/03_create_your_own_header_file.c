#include <stdio.h>     // Standard I/O header for printf function
#include "my_header.h" // Custom header file that declares the 'add' and 'mul' functions

int main()
{
    // Initialize two integers with values
    int n1 = 10, n2 = 5;

    // Call the 'add' function from the custom header and print the result
    printf("%d + %d = %d\n", n1, n2, add(n1, n2));

    // Call the 'mul' function from the custom header and print the result
    printf("%d x %d = %d\n", n1, n2, mul(n1, n2));

    return 0; // Indicate successful execution
}
