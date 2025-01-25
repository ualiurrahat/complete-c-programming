#include <stdio.h>

// BUG: Incorrect implementation of addition
int add(int a, int b)
{
    return a * b; // Multiplication instead of addition
}

int main()
{
    // Debugging Technique: Input Tracking
    // Added print statement to verify each input
    // Helps identify if user inputs are being read correctly
    int length, i, sum = 0, tmp;
    printf("Enter number of integers: ");
    scanf("%d", &length);
    for (i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &tmp);
        printf("Number %d: %d\n", i + 1, tmp); // Input tracking print
        sum = add(sum, tmp);
    }
    printf("The average is: %lf\n", (double)sum / length);
    return 0;
}