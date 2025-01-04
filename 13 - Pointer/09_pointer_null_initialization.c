#include <stdio.h>

// Main function
int main()
{
    int x = 100;   // Declare and initialize an integer variable x with the value 100
    int *p = NULL; // Declare an integer pointer p and initialize it to NULL

    // Print the value of x directly
    printf("Value of x: %d\n", x);

    p = &x; // Assign the address of x to the pointer p

    // Dereference pointer p to access the value of x and print it
    printf("Value of *p: %d\n", *p); // *p is 100, the value of x

    return 0; // Indicate successful program execution
}
