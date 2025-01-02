// Filename: decimal_to_binary.c
// This program converts a decimal number (input by the user) into its binary equivalent.

#include <stdio.h>

int main()
{
    int num;         // Variable to store the input decimal number
    char binary[20]; // Array to store the binary number (up to 20 bits)

    // Prompt the user to enter a decimal number
    printf("Enter decimal number: ");
    scanf("%d", &num); // Read the decimal number from the user

    int i = 0; // Initialize the index for storing the binary digits

    // Convert decimal to binary using division by 2
    while (num)
    {
        int rem = num % 2;     // Get the remainder when dividing by 2 (either 0 or 1)
        binary[i] = rem + '0'; // Store the remainder as a character ('0' or '1')
        i++;                   // Increment the index for the next binary digit
        num = num / 2;         // Update the number by dividing it by 2
    }

    // Print the binary equivalent (the array stores the binary in reverse order)
    printf("Binary Number: ");
    for (i = i - 1; i >= 0; i--) // Start from the last binary digit and print in reverse
    {
        printf("%c", binary[i]); // Print each binary digit
    }

    return 0; // Exit the program
}
