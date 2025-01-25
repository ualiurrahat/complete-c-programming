#include <stdio.h>

double power(double base, double exp)
{
    int i;
    double result = 1;
    for (i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    printf("result is %.2lf\n", result);
}

int main()
{
    double base, exponent;
    double result;

    printf("enter base:\n");
    scanf("%lf", &base);

    printf("enter exponent:\n");
    scanf("%lf", &exponent);

    result = power(base, exponent);

    return 0;
}
