#include <stdio.h>

// Function to convert a character to uppercase using bitwise AND operation.
char to_upper(char ch)
{
    return ch & 95; // '& 95' clears the 6th bit, converting lowercase to uppercase.
}

// Function to convert a character to lowercase using bitwise OR operation.
char to_lower(char ch)
{
    return ch | 32; // '| 32' sets the 6th bit, converting uppercase to lowercase.
}

int main()
{
    // Declare a string with both uppercase and lowercase letters.
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";

    // Iterate through the string and print both uppercase and lowercase versions using bitwise operations.
    for (int i = 0; i < 26; i++)
    {
        // Convert to uppercase and print the result.
        printf("Uppercase: %c\t", to_upper(str[i]));
        // Convert to lowercase and print the result.
        printf("Lowercase: %c\n", to_lower(str[i]));
    }

    return 0; // End of the program.
}
