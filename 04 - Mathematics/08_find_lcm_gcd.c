// find lowest common factor lcm of two values
#include <stdio.h>

int main()
{
    int a, b, temp, gcd, lcm;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    int mul = a * b;
    if (a == 0)
    {
        gcd = b;
        lcm = 0;
    }

    else if (b == 0)
    {
        gcd = a;
        lcm = 0;
    }

    else
    {
        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
        lcm = mul / gcd;
    }

    printf("GCD is %d\n", gcd);
    printf("LCM is %d\n", lcm);

    return 0;
}