#include <stdio.h>

int main()
{
    // Declare variables
    int n, count, i;
    printf("Enter a number: ");
    // Input the number to count the set bits (1's)
    scanf("%d", &n);

    // Initialize count to zero
    count = 0;

    // Loop until n becomes zero
    while (n)
    {
        // If the least significant bit is 1
        if (n & 1)
        {
            count++; // Increment count of set bits
        }

        // Right shift n by 1 to check the next bit
        n = n >> 1;
    }

    // Output the total number of set bits
    printf("Number of 1's: %d\n", count);

    return 0;
}
