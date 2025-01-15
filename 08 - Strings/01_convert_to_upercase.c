#include <stdio.h>
#include <ctype.h> // to use toupper() function
int main()
{
    // Declare and initialize a character array with the input string "bangladesh"
    char input[] = "bangladesh";

    // Print the initial lowercase input string
    printf(" Lowercase input: %s\n", input);

    // Define the length of the input string
    int length = 10; // Note: Here, length is hardcoded for this specific example.

    // Loop through each character in the string
    for (int i = 0; i < length; i++)
    {
        // Check if the character is a lowercase letter (ASCII values 97 to 122)
        if (input[i] >= 97 && input[i] <= 122)
        {
            // way 1: Convert the lowercase letter to uppercase by shifting it to the uppercase range
            input[i] = 'A' + (input[i] - 'a');
            // way 2: changing the ascii value directly for each character
            //  input[i] = input[i] - 32;
            // way 3: using library function
            //  input[i] = toupper(input[i]);
        }
    }

    // Print the modified string with all uppercase letters
    printf(" Uppercase output: %s", input);

    return 0; // Indicate that the program executed successfully
}
