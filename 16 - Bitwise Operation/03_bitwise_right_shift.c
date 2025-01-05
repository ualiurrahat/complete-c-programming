#include <stdio.h>

int main()
{
    int m, x, n; // Declare integer variables: 'm' for the shifted result, 'x' for the shift count, and 'n' for the input number.

    while (1) // Infinite loop to repeatedly process user input until termination condition is met.
    {
        // Prompt user for input number.
        printf("Enter your number (enter 0 to exit): ");
        scanf("%d", &n);

        // Exit the loop if the input number is 0.
        if (n == 0)
        {
            break; // Exit the loop.
        }

        // Ask the user for the number of bits to shift the input number to the right.
        printf("How many bits you want to shift left?: ");
        scanf("%d", &x);

        // Perform right bitwise shift operation on 'n' by 'x' bits and store the result in 'm'.
        m = n >> x;

        // Print the shifted number.
        printf("The number is: %d\n\n", m);
    }

    return 0; // End of the program.
}
