/*
    Auto Storage Class in C
    =======================
    - Default Value: Garbage (if uninitialized)
    - Scope: Function / Block
    - Location: Stack segment
    - Lifetime: Exists only within the block or function where declared
*/

#include <stdio.h>

// 'auto' storage class is only applicable to local variables
// auto int x = 30; // Not allowed (auto cannot be used for global variables)

int main()
{
    // Local variable with auto storage class (explicitly declared, but 'auto' is default)
    auto int x = 25;

    {
        // Block scope variable (uninitialized, will contain garbage value)
        auto int x;
        printf("Inside block, x = %d\n", x);
    }

    // Accessing the 'x' from main function scope
    printf("Inside main function, x = %d\n", x);

    return 0;
}
