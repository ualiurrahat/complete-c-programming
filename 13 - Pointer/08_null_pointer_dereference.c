#include <stdio.h>

// Main function
int main()
{
    int x = 100;   // Declare and initialize an integer variable x with the value 100
    int *p = NULL; // Declare an integer pointer p and initialize it to NULL

    // Print the value of x directly
    printf("Value of x: %d\n", x);

    // Dereferencing a NULL pointer is undefined behavior and can cause a crash
    // This will likely result in a runtime error
    printf("Value of *p: %d\n", *p); // Dereferencing NULL pointer (undefined behavior)

    return 0; // Indicate successful program execution
}
