/*
    Static Storage Class in C
    ==========================
    - Default Value: 0 (for int), 0.000000 (for float/double), NULL (for char, strings)
    - Scope: Block (but retains its value between function calls)
    - Location: RAM
    - Lifetime: Till the end of the program

    Key Points:
    -----------
    - A 'static' variable retains its value between function calls.
    - Unlike auto variables, which are reinitialized every time a function/block is entered,
      static variables preserve their last stored value.
    - Static variables are stored in a fixed memory location throughout the program's execution.
    - Global static variables limit their visibility to the file in which they are declared.
*/

#include <stdio.h>

void display()
{
    // Static variable: retains its value between function calls
    static int x; // Uninitialized static variable, defaults to 0
    x += 10;
    printf("x = %d\n", x);
}

int main()
{
    display(); // x = 10 (initialized to 0, then incremented by 10)
    display(); // x = 20 (retains previous value and increments by 10)

    // printf("x = %d\n", x); // Error: 'x' is out of scope (only visible in display())

    return 0;
}
