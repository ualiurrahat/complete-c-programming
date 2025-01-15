#include <stdio.h>

int main()
{
    double length,width,area;

    printf("enter the width and length of the rectangles:");
    scanf("%lf %lf",&width,&length);

    area = width * length;

    printf("The area = %.2lf",area);


    return 0;
}
