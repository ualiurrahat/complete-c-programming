#include <stdio.h>

int main()
{
    int n; // Declare an integer variable to store the user input.

    while (1) // Infinite loop to repeatedly process user input.
    {
        // Prompt the user to enter a number.
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);

        // Check if the input number is 0. If yes, exit the loop.
        if (n == 0)
        {
            break; // Exit the loop.
        }

        // Check if the least significant bit of 'n' is set.
        if (n & 1) // '& 1' checks if the last bit of the binary representation of 'n' is 1.
        {
            printf("%d is odd.\n", n); // If true, the number is odd.
        }
        else
        {
            printf("%d is even.\n", n); // If false, the number is even.
        }
    }

    return 0; // End of the program.
}
