#include <stdio.h>

int main()
{
    int namta[10][10]; // 2D array to store the multiplication table (1 to 10)
    int row, col;      // Variables to iterate over rows and columns

    // Populate the multiplication table
    for (row = 0; row < 10; row++) // Loop through rows (1 to 10)
    {
        for (col = 0; col < 10; col++) // Loop through columns (1 to 10)
        {
            namta[row][col] = (row + 1) * (col + 1); // Calculate and store the product
        }
    }

    // Print the multiplication table
    for (row = 0; row < 10; row++) // Loop through rows
    {
        for (col = 0; col < 10; col++) // Loop through columns
        {
            // Print the current multiplication statement (e.g., 2 x 3 = 6)
            printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }
        printf("\n"); // Print a blank line after each row for better readability
    }

    return 0; // Indicate successful execution
}
