#include <stdio.h>
#include <limits.h>

int main()
{
    // Determine the number of bits in an int (typically 32 bits)
    int n = sizeof(int) * CHAR_BIT;
    int i, count = 0, num;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop through each bit of the integer
    for (i = 0; i < n; i++)
    {
        // Check if the i-th bit is set (1)
        if (num & (1 << i))
        {
            count++; // Increment the count of set bits
        }
    }

    // Output the total number of set bits (1's)
    printf("Number of 1's: %d\n", count);

    return 0;
}
