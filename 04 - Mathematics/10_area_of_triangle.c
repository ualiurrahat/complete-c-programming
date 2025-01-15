/*Find the area of triangle when base and height is given by the user*/

#include <stdio.h>

int main()
{
    double base, height, area;

    printf("Base =");
    scanf("%lf", &base);

    printf("Height =");
    scanf("%lf", &height);

    area = (double)1 / 2 * base * height; // see what happens if double is removed.

    printf("Area is = %0.2lf", area);

    return 0;
}
