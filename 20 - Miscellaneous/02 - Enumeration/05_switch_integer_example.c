#include <stdio.h>

int main()
{
    int n; // Declare an integer variable to store user input

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer ( > 0): ");
    scanf("%d", &n);
    // Input validation for positive integers
    if (n <= 0)
    {
        printf("Error: Please enter a positive integer greater than 0.\n");
        return 1; // Exit the program with a non-zero status to indicate an error
    }
    // Use a switch statement to determine the output based on the value of 'n'
    switch (n)
    {
    case 1: // If 'n' is 1
        printf("One item\n");
        break; // Exit the switch block after executing this case
    case 2:    // If 'n' is 2
        printf("Two items\n");
        // Note: No 'break' here, so the next block will also execute
    default: // Executes if 'n' does not match any case above
        printf("Many items\n");
        break; // Exit the switch block
    }

    return 0;
}
