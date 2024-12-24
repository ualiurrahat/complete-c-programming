#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int remainder = n % 2;
    if (remainder == 0)
    {
        printf("%d is an even number.\n", n);
    }
    else
    {
        printf("%d is an odd number.\n", n);
    }
    return 0;
}