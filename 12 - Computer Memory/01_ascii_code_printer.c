#include <stdio.h>

// Main function
int main()
{
    int i; // Variable to iterate through ASCII values

    // Loop through ASCII values from 33 to 126
    // These values correspond to printable ASCII characters
    for (i = 33; i <= 126; i++)
    {
        // Print the ASCII character and its corresponding code
        printf("ASCII code for %c is %d\n", i, i);
    }

    return 0; // Indicate successful program execution
}
