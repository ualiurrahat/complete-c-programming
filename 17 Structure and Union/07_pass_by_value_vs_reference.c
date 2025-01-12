#include <stdio.h>

// Function that uses call-by-value to modify the argument
void plus_ten1(int a)
{
    a = a + 10; // Modifies the local copy of 'a', but does not affect the original 'a' in main
}

// Function that uses call-by-reference (via pointers) to modify the argument
void plus_ten2(int *a)
{
    *a = *a + 10; // Modifies the original 'a' in main by dereferencing the pointer
}

int main()
{
    int a = 5; // Initialize variable 'a' with value 5

    plus_ten1(a);         // Pass 'a' by value, no change to 'a'
    printf("a: %d\n", a); // Prints 'a' (still 5)

    plus_ten2(&a);        // Pass 'a' by reference (pointer), modifies the original 'a'
    printf("a: %d\n", a); // Prints 'a' (now 15)

    return 0; // End of program
}
