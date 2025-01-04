#include <stdio.h>

// Main function
int main()
{
    double pi = 3.14159265358; // Declare and initialize a double variable

    int *ptr; // Declare a pointer to an integer

    // This assignment is invalid because the types do not match
    // You cannot directly assign the address of a double to an int pointer
    ptr = &pi;

    // Print the value of pi directly
    printf("Value of pi : %lf\n", pi);

    // Attempting to dereference the pointer to print the value of pi
    // This will result in undefined behavior
    printf("Value of pi : %lf\n", *ptr);

    return 0; // Indicate successful program execution
}
