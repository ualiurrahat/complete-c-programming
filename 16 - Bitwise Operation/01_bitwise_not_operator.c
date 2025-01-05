#include <stdio.h>

int main()
{
    char a, b; // Declare two character variables 'a' and 'b'.

    // Initializing 'a' with 0 and calculating its bitwise complement.
    a = 0;
    b = ~a;                           // '~' is the bitwise NOT operator that flips all bits of 'a'.
    printf("a = %d, b = %d\n", a, b); // Display the value of 'a' and its complement 'b'.

    // Reinitializing 'a' with 1 and calculating its bitwise complement.
    a = 1;
    b = ~a;                           // Perform bitwise NOT on 'a'.
    printf("a = %d, b = %d\n", a, b); // Display the value of 'a' and its complement 'b'.

    return 0; // End of the program.
}
