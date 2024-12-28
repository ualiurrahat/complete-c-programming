#include <stdio.h>

// Function definition: Demonstrates the scope and manipulation of variables
int test_function(int x)
{
    int y = x; // Assign the value of x to y
    x = 2 * y; // Update the value of x (local to the function)
    // Print the values of x and y inside the function
    printf("Value of x and y inside test_function, x = %d, y = %d\n", x, y);
    return (x * y); // Return the product of x and y
}

int main()
{
    int x = 10, y = 20, z = 30; // Variable declarations and initializations

    z = test_function(x); // Call the test_function and store the return value in z

    // Print the values of x, y, and z in the main function
    printf("Value of x, y, and z in main function, x = %d, y = %d, z = %d\n", x, y, z);

    return 0; // Indicate successful program termination
}
