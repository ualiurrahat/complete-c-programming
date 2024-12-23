#include <stdio.h>

int main()
{
    double a, b, sum;
    a = 25.8;
    b = 8.25;
    sum = a + b;
    printf("Sum is %lf\n", sum);   // print upto 6 decimal value
    printf("Sum is %.2lf\n", sum); // print only 2 decimal values
    printf("Sum is %.0lf\n", sum); // print no decimal values
    return 0;
}