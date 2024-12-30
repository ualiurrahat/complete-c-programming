#include <stdio.h>
#include <string.h>

int main()
{
    // Declare an array to store the input string
    char input[100];

    // Declare loop variables
    int i, j;

    // Prompt user for input string
    printf("Enter input string: ");
    scanf("%s", input); // Read a single word as input

    // Calculate the length of the input string
    int len = strlen(input);

    // Loop to compare characters from both ends of the string towards the center
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        // If characters at positions i and j do not match, it's not a palindrome
        if (input[i] != input[j])
        {
            printf("String is not palindrome\n"); // Output result
            return 0;                             // Exit early since it's confirmed not a palindrome
        }
    }

    // If the loop completes without finding a mismatch, the string is a palindrome
    printf("String is palindrome\n"); // Output result

    return 0; // Return 0 to indicate successful execution
}
