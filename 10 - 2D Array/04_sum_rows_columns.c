#include <stdio.h>

int main()
{
    // Initialize a 5x5 2D array with the given values
    int ara[5][5] = {
        {6, 4, 7, 8, 9}, // Row 1
        {3, 7, 1, 9, 9}, // Row 2
        {8, 6, 4, 2, 7}, // Row 3
        {2, 4, 2, 5, 9}, // Row 4
        {4, 1, 6, 7, 3}  // Row 5
    };

    // Calculate and print the sum of each row
    for (int row = 0; row < 5; row++) // Loop through each row
    {
        int sum = 0;                      // Variable to store the sum of the current row
        for (int col = 0; col < 5; col++) // Loop through each column in the current row
        {
            sum = sum + ara[row][col]; // Add the current element to the sum
        }
        printf("Sum of row %d: %d\n", row + 1, sum); // Print the sum of the row
    }

    // Calculate and print the sum of each column
    for (int col = 0; col < 5; col++) // Loop through each column
    {
        int sum = 0;                      // Variable to store the sum of the current column
        for (int row = 0; row < 5; row++) // Loop through each row in the current column
        {
            sum = sum + ara[row][col]; // Add the current element to the sum
        }
        printf("Sum of column %d: %d\n", col + 1, sum); // Print the sum of the column
    }

    return 0; // Indicate successful execution
}
