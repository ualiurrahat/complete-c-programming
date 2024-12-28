#include <stdio.h>

// Function definition: Modifies the first element of the array
void test_function(int ara[])
{
    ara[0] = 100; // Update the first element of the array
    return;       // Return from the function (optional for void functions)
}

int main()
{
    // Initialize an array
    int ara[] = {1, 2, 3, 4, 5};

    // Print the initial value of the first element
    printf("ara[0] = %d\n", ara[0]);

    // Call the function to modify the array
    test_function(ara);

    // Print the value of the first element after calling the function
    printf("After running test_function, ara[0] = %d\n", ara[0]);

    return 0; // Indicate successful program termination
}
