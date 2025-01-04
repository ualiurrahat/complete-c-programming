#include <stdio.h>

// Main function
int main()
{
    int x = 25; // Declare an integer variable and initialize it
    int *p;     // Declare a pointer to an integer

    p = &x; // Assign the address of x to the pointer p

    // Print the value stored at the address pointed to by p (dereferencing the pointer)
    printf("*p = %d\n", *p);

    // Print the value of the pointer p (the address of x)
    printf("Value of p is = %p\n", p);

    return 0; // Indicate successful program execution
}
