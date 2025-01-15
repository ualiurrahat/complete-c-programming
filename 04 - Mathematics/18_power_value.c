#include <stdio.h>

// power function works with double var only.

int main()
{
    double x,y;
    printf("enter the base number:");//2
    scanf("%lf", &x);

    printf("enter the power number:");//5
    scanf("%lf", &y);

    double result = pow(x,y);//2^5= 32

    printf(" %.2lf^%.2lf = %0.2lf\n",x,y,result);


    return 0;
}
