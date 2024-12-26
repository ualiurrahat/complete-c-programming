// finding GCD of two numbers using Euclid's division algorithm
// gcd(a,0) = a;
// gcd(a,b) = gcd(b,a%b);
#include <stdio.h>

int main()
{
    int a, b, temp, gcd;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    if (a == 0)
        gcd = a;
    else if (b == 0)
        gcd = b;
    else
    {
        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
    }
    printf("GCD is %d\n", gcd);
    return 0;
}