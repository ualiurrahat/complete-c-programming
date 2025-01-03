#include <stdio.h>

// Main function
int main()
{
    // Declare and initialize an array with 5 elements
    int ara[5] = {50, 60, 70, 80, 90};

    // Print the values of the array elements
    printf("Value of Array: %d, %d, %d, %d, %d\n", ara[0], ara[1], ara[2], ara[3], ara[4]);

    // Print the base address of the array
    printf("Address of ara is %p\n", ara);

    // Print the addresses of each array element
    printf("Address of ara[0] is %p\n", &ara[0]);
    printf("Address of ara[1] is %p\n", &ara[1]);
    printf("Address of ara[2] is %p\n", &ara[2]);
    printf("Address of ara[3] is %p\n", &ara[3]);
    printf("Address of ara[4] is %p\n", &ara[4]);

    return 0; // Indicate successful program execution
}
