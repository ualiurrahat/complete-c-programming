/*Find the area of triangle when user inputs are
lengths of triangle arms*/
#include <stdio.h>

int main()
{
    double a, b, c, s, area;

    printf("Enter the 3 length values of triangle:");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle = %.2lf", area);

    return 0;
}
