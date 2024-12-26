// find gcd of two numbers
#include <stdio.h>

int main()
{
    int a, b, gcd, x;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // take the smallest of a and b as gcd
    if (a < b)
    {
        x = a;
    }
    else
    {
        x = b;
    }
    // loop to find gcd
    for (; x >= 1; x--)
    {
        if (a % x == 0 && b % x == 0)
        {
            gcd = x;
            break;
        }
    }
    printf("GCD is %d\n", gcd);
    return 0;
}