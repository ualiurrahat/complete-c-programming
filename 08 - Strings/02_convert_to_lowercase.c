#include <stdio.h>
#include <ctype.h> // to use tolower() function

int main()
{
    // Declare and initialize a character array with the input string "BANGLADESH"
    char input[] = "BANGLADESH";

    // Print the initial uppercase input string
    printf(" Uppercase input:  %s\n", input);

    // Define the length of the input string
    int length = 10; // Note: The length is hardcoded for this specific example.

    // Loop through each character in the string
    for (int i = 0; i < length; i++)
    {
        // Check if the character is an uppercase letter (ASCII values 65 to 90)
        if (input[i] >= 65 && input[i] <= 90)
        {
            // way 1: Convert the uppercase letter to lowercase by shifting it to the lowercase range
            input[i] = 'a' + (input[i] - 'A');
            // way 2:direcly changing the ascii value of each character
            // input[i] = input[i] + 32;
            // way 3: using library function
            // input[i] = tolower(input[i]);
        }
    }

    // Print the modified string with all lowercase letters
    printf(" Lowercase output: %s", input);

    return 0; // Indicate that the program executed successfully
}
