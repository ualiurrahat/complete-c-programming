#include <stdio.h>

int main()
{
    int a = 50.45, b = 60.32, sum;
    // a = 50, b = 60, because we used int type var
    // double data type value of a and b converted into int type
    // this is called typecasting.
    sum = a+b; // sum = 50 + 60 = 110
    printf("%d + %d = %d", a, b,sum);
    return 0;
}