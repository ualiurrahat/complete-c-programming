#include <stdio.h>
#define DEBUG 1 // Macro to enable/disable debug prints

// FIXED: Correct implementation of addition
int add(int a, int b)
{
    return a + b; // Correct addition
}

int main()
{
    // Debugging Technique: Debug Macro
    // Uses preprocessor #define to control debug output
    // Allows easy enabling/disabling of debug information
    int length, i, sum = 0, tmp;
    printf("Enter number of integers: ");
    scanf("%d", &length);

    // Conditional debug print for input length
    if (DEBUG)
    {
        printf("----\nDEBUG\n\tNumber of integers: %d\nENDDEBUG\n----\n", length);
    }

    for (i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &tmp);

        // Conditional debug print for each input
        if (DEBUG)
        {
            printf("----\nDEBUG\n\tNumber %d: %d\nENDDEBUG\n----\n", i + 1, tmp);
        }

        sum = add(sum, tmp);

        // Conditional debug print for running sum
        if (DEBUG)
        {
            printf("----\nDEBUG\n\tCurrent sum: %d\nENDDEBUG\n----\n", sum);
        }
    }
    printf("The average is: %lf\n", (double)sum / length);
    return 0;
}