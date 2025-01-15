#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("enter any value:");
    scanf("%lf", &x);

    double logvalue = log(x);
    double log_ten_value = log10(x);

    double expovalue = exp(x);



    printf("log(%lf) = %.2lf\n",x,logvalue);
    printf("log10(%lf) = %.2lf\n",x,log_ten_value);

    printf("esponential(%lf) = %.2lf\n",x,expovalue);


    return 0;
}
