#include <stdio.h>
#include <string.h>

int main()
{
    // Initialize a 2D character array to store the names of SAARC countries
    char saarc[7][100] = {
        "Bangladesh", // Country 1
        "India",      // Country 2
        "Pakistan",   // Country 3
        "Sri Lanka",  // Country 4
        "Nepal",      // Country 5
        "Bhutan",     // Country 6
        "Maldives"    // Country 7
    };

    int row, col, name_length; // Variables for iteration and storing string length

    // Iterate through each country's name in the array
    for (row = 0; row < 7; row++) // Loop through the rows (countries)
    {
        // Get the length of the current country's name
        name_length = strlen(saarc[row]);

        // Iterate through each character in the current country's name
        for (col = 0; col < name_length; col++) // Loop through the columns (characters)
        {
            // Print the position and the character
            // Format: (row index, column index) = character
            printf("(%d, %d) = %c, ", row, col, saarc[row][col]);
        }
        printf("\n"); // Print a newline after each country's name
    }

    return 0; // Indicate successful execution
}
