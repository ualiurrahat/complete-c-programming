#include <stdio.h>

// Main function
int main()
{
    int x = 10; // Declare and initialize an integer variable x
    int y;      // Declare an integer variable y
    int *p;     // Declare a pointer to an integer

    // Print the initial value of x
    printf("Value of x: %d\n", x);

    p = &x;  // Assign the address of x to the pointer p
    y = *p;  // Dereference the pointer to copy the value of x into y
    *p = 15; // Modify the value of x using the pointer

    // Print the updated value of x
    printf("Value of x: %d\n", x);

    // Print the value of y, which was copied from x before modification
    printf("Value of y: %d\n", y);

    // Print the value stored at the memory location pointed to by p (i.e., the new value of x)
    printf("Value of *p: %d\n", *p);

    // Print the memory addresses of x, y, and the pointer p
    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Value of p: %p\n", p);

    return 0; // Indicate successful program execution
}
