#include <stdio.h>
#include <string.h>

int main()
{
    // Declare two arrays to store the input string and its reversed version
    char input[100], reversed[100];

    // Prompt user for input string
    printf("Enter string: ");
    scanf("%s", input); // Read a single word as input

    // Calculate the length of the input string
    int len = strlen(input);
    int i, j;

    // Loop to reverse the input string and store it in the 'reversed' array
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        reversed[i] = input[j]; // Copy characters in reverse order
    }

    // Add the null-terminating character at the end of the reversed string
    reversed[i] = '\0'; // Marks the end of the string

    // Use strcmp to compare the original string with the reversed string
    // strcmp() returns 0 if both strings are equal
    if (strcmp(input, reversed) == 0)
    {
        printf("Strings are palindrome\n"); // If they are equal, the string is a palindrome
    }
    else
    {
        printf("Strings are not palindrome\n"); // If they are not equal, it's not a palindrome
    }

    // Print both the input and reversed strings for clarity
    printf("Input String: %s\n", input);
    printf("Reversed String: %s\n", reversed);

    return 0; // Return 0 to indicate successful execution
}
