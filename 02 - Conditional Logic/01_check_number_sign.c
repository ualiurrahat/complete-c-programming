#include <stdio.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    // conditional logic
    if (n > 0)
    {
        printf("The number is positive.\n");
    }
    else if (n < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }
    return 0;
}