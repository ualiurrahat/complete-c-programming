#include <stdio.h>

// Main function
int main()
{
    int x = 10; // Declare an integer variable and initialize it
    int *p;     // Declare a pointer to an integer

    p = &x; // Assign the address of x to the pointer p

    // Print the initial value of x
    printf("Value of x: %d\n", x);

    *p = 20; // Modify the value of x using the pointer p

    // Print the updated value of x
    printf("Value of x: %d\n", x);

    // Print the address of x in two ways (direct and via the pointer)
    printf("Address of x: %p\n", &x);
    printf("Address of x: %p\n", p);

    return 0; // Indicate successful program execution
}
