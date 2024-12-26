/* You have to solve the linear equation equation for two variables.
a1x + b1y = c1
a2x + b2y = c2
ex: 4x+5y = 14, 5x+6y = 17
solutin: x = 1, y = 2
*/
#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, d, x, y;
    printf("a1 = ");
    scanf("%lf", &a1);
    printf("a2 = ");
    scanf("%lf", &a2);
    printf("b1 = ");
    scanf("%lf", &b1);
    printf("b2 = ");
    scanf("%lf", &b2);
    printf("c1 = ");
    scanf("%lf", &c1);
    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1 * b2 - a2 * b1;

    // check for non-existence equation
    if ((int)d == 0)
    {
        printf("Value of x and y can not be determined.\n");
    }
    else
    {
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;
        printf("x = %.2lf, y = %.2lf\n", x, y);
    }
    return 0;
}