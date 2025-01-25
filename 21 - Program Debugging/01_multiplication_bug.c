#include <stdio.h>

// BUG: Incorrect implementation of addition
// The add() function uses multiplication instead of addition
// This will cause incorrect sum and average calculations
int add(int a, int b)
{
    return a * b; // CRITICAL BUG: Should be a + b
}

int main()
{
    // Debugging Issue: Logic error in arithmetic operation
    // The add() function multiplies instead of adding numbers
    // This leads to incorrect sum and subsequently incorrect average
    int length, i, sum = 0, tmp;
    printf("Enter number of integers: ");
    scanf("%d", &length);
    for (i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &tmp);
        sum = add(sum, tmp); // Will produce wrong results due to multiplication
    }
    printf("The average is: %lf\n", (double)sum / length);
    return 0;
}