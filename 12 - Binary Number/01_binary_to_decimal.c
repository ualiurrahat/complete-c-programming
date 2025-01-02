// Filename: binary_to_decimal.c
// This program converts a binary number (input as a string) into its decimal equivalent.

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char binary[65];            // Array to store the binary number (maximum 64 bits + 1 for null terminator)
    int len, decimal, power, i; // Variables for length of binary, decimal result, power of 2, and loop index

    // Prompt the user to enter a binary number
    printf("Enter the binary number: ");
    scanf("%s", binary); // Read the binary number as a string

    decimal = 0;          // Initialize decimal value to 0
    len = strlen(binary); // Calculate the length of the binary string
    power = len - 1;      // Set the initial power of 2 (based on the most significant bit)

    // Iterate through each character of the binary string
    for (i = 0; i < len; i++)
    {
        // Convert the binary character ('0' or '1') to its integer value
        // Multiply by 2 raised to the current power and add to the decimal value
        decimal = decimal + (binary[i] - '0') * pow(2, power);
        power--; // Decrement the power of 2 for the next bit
    }

    // Print the resulting decimal value
    printf("Decimal value is %d\n", decimal);

    return 0; // Exit the program
}
