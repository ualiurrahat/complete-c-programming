#include <stdio.h>

// Function to check if the character is a digit
// Returns 1 if the character is a digit (ASCII values 48-57), otherwise 0
int solve(char a)
{
    if (a >= 48 && a <= 57) // ASCII values for '0' to '9'
    {
        return 1;
    }
    return 0;
}

int main()
{
    char ch; // Variable to store the input character
    printf("Enter a character: ");
    ch = getchar(); // Read a single character input from the user

    // Call the solve function to check if the character is a digit
    int ans = solve(ch);

    // Print the result: 1 if it's a digit, 0 otherwise
    printf("%d\n", ans);

    return 0; // Indicate successful program execution
}
