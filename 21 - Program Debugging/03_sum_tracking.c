#include <stdio.h>

// BUG: Incorrect implementation of addition
int add(int a, int b)
{
    return a * b; // Multiplication instead of addition
}

int main()
{
    // Debugging Technique: Sum Tracking
    // Added print statement to track current number and running sum
    // Helps verify calculation progression and identify potential issues
    int length, i, sum = 0, tmp;
    printf("Enter number of integers: ");
    scanf("%d", &length);
    for (i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &tmp);
        sum = add(sum, tmp);
        printf("Current number: %d, current sum: %d\n", tmp, sum); // Sum tracking
    }
    printf("The average is: %lf\n", (double)sum / length);
    return 0;
}