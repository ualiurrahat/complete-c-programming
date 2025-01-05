#include <stdio.h>

int main()
{
    int n; // Declare an integer variable to store the user input.

    while (1) // Infinite loop to repeatedly process user input.
    {
        // Prompt the user to enter a number.
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);

        // If the user enters 0, exit the loop.
        if (!n) // The '!' operator checks if the number is zero.
        {
            break; // Exit the loop.
        }

        // Check if the number is a power of 2.
        // A number is a power of 2 if it has only one bit set, which can be checked using 'n & (n - 1)'.
        // If the result is zero, the number is a power of 2.
        if (n > 0 && (n & (n - 1) == 0)) // Efficient check using bitwise operation.
        {
            printf("%d is a power of 2.\n", n); // If true, print that it's a power of 2.
        }
        else
        {
            printf("%d is not a power of 2.\n", n); // Otherwise, print that it's not a power of 2.
        }
    }

    return 0; // End of the program.
}
