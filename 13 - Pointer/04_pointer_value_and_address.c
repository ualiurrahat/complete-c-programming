#include <stdio.h>

// Main function
int main()
{
    int x = 10; // Declare and initialize an integer variable
    int *p;     // Declare a pointer to an integer

    // Print the initial value of x
    printf("Value of x: %d\n", x); // Value of x: 10

    p = &x;  // Assign the address of x to the pointer p
    *p = 20; // Modify the value of x using the pointer

    // Print the updated value of x
    printf("Value of x: %d\n", x); // Value of x: 20

    x = 15;                        // Modify the value of x directly
    printf("Value of x: %d\n", x); // Value of x: 15

    // Print the value stored at the memory location pointed to by p
    printf("Value stored at location %p is %d\n", p, *p); // Value stored at location 0061FF18 is 15

    // Print the address of x in two ways (directly and via the pointer)
    printf("Address of x: %p\n", &x); // Address of x: 0061FF18
    printf("Address of x: %p\n", p);  // Address of x: 0061FF18

    return 0; // Indicate successful program execution
}
