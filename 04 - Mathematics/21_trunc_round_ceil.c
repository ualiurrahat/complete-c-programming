#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("enter the number:");
    scanf("%lf",&x);



    double round_value = round(x);//if precision is more than .5 it will give you the next integer number. otherwise number remains of same input.
    double trunc_value = trunc(x);//discards the precision part.only gives the integer part.
    double ceil_value = ceil(x);//gives the next upper integer value.
    double floor_value = floor(x);// gives the lower part of the integer value.

    // think these values in terms of negative number is used.


    printf("round(%lf) = %lf\n",x,round_value);
    printf("trunc(%lf) = %lf\n",x,trunc_value);
    printf("ceil(%lf) = %lf\n",x,ceil_value);
    printf("floor(%lf) = %lf\n",x,floor_value);



    return 0;
}
