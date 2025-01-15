#include <stdio.h>
#include <math.h>

int main()
{
    double radius,area;
    printf("Enter the radius of circle:");
    scanf("%lf",&radius);

    area = M_PI * radius * radius;

    printf("Circle area = %.2lf\n",area);
    printf("pi = %lf\n", M_PI);

    return 0;
}
