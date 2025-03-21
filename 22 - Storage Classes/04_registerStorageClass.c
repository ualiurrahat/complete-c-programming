/*
    Register Storage Class in C
    ===========================
    - Default Value: Garbage (if uninitialized)
    - Scope: Local (Function / Block)
    - Location: CPU Register (if available, otherwise stored in RAM)
    - Lifetime: Exists only within the function or block where declared

    Key Points:
    -----------
    - A 'register' variable is stored in the CPU register instead of RAM (if possible).
    - It cannot have a memory address (pointers cannot be used to access it).
    - Declaring a variable as 'register' does not guarantee it will be stored in a register;
      the compiler makes the final decision based on availability.

    Invalid Usage:
    --------------
    register int x = 8;
    int *ptr = &x; // Not allowed (register variables have no memory address)

    Valid Usage:
    ------------
    int x = 25;
    register int *ptr = &x; // Allowed (but x itself is in RAM)

    Why Use Register Storage Class?
    --------------------------------
    - Normally, variables are stored in RAM, and every operation requires fetching data
      from RAM, processing it, and storing it back, which takes time.
    - Using 'register' hints the compiler to store frequently used variables in CPU registers,
      reducing memory access time and improving program efficiency.

    Note:
    -----
    - Only local variables (inside functions/blocks) can use 'register', similar to 'auto'.
    - Global variables cannot be declared as 'register'.
    - If no storage class is specified, the default is 'auto' (but 'auto' is not allowed for global variables).
*/

#include <stdio.h>

int main()
{
    // Register variable for faster access
    register int sum = 0;

    // Loop counter also declared as register
    for (register int i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
