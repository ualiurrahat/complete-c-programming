#include <stdio.h>

int main()
{
    // Array with numbers, where each number appears twice except one
    int ara[] = {1, 2, 3, 4, 1, 2, 3};
    int result, i, n = 7;

    // Initialize result with the first element of the array
    result = ara[0];

    // XOR all elements in the array
    for (i = 1; i < n; i++)
    {
        result = result ^ ara[i]; // XOR operation to cancel out pairs
    }

    // The remaining number is the one that occurs only once
    printf("Result: %d\n", result); // Output the result

    return 0;
}
