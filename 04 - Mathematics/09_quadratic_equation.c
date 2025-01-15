/* quadric equation = a * x^2 + b * x + c;

x1 = ( - b + sqrt(b^2 - 4ac)) / 2a;
x2 = ( - b - sqrt(b^2 - 4ac)) / 2a;
d = sqrt( b^2 - 4ac);

then x1 = ( -b + d) /2a;
    x2 = ( - b - d) 2a;

*/

#include <stdio.h>
#include <math.h>

int main()
{
        double a,b,c,x1,x2,d;

        printf("enter the value of a,b,c:");
        scanf("%lf %lf %lf", &a,&b,&c);

        d = sqrt( b * b - 4 * a * c );

        x1 = ( - b + d ) / (2 * a);
        x2 = ( - b + d ) / (2 * a);

        printf(" x1 = %0.2lf",x1);
        printf(" x2 = %0.2lf",x2);

    return 0;
}
