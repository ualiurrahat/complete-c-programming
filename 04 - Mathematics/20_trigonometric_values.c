// a program to show trigonemetric value of degree angles.

#include <stdio.h>
#include <math.h>

int main()
{
    double degree;
    double radian;
    printf("enter angle of degree: ");
    scanf("%lf", &degree);

    radian = (degree * M_PI) / 180;

    printf("sin(%.2lf) = %.2lf\n", degree,sin(radian));
    printf("cos(%.2lf) = %.2lf\n", degree,cos(radian));
    printf("tan (%.2lf) = %.2lf\n", degree,tan (radian));
    printf("sec(%.2lf) = %.2lf\n", degree, 1/cos(radian));
    printf("cosec(%.2lf) = %.2lf\n", degree,1/sin(radian));
    printf("cot(%.2lf) = %.2lf\n", degree,1/tan(radian));

    return 0;
}
