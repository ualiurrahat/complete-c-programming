//1.5 + 2.5 + 3.5 + 4.5 +....= ?

#include <stdio.h>

int main()
{
    int n;
    printf("enter the last integer of the series:");
    scanf("%d", &n);

    double i, sum;
    sum = 0;
    for(i = 1.5; i <= n; i++){
        sum = sum + i ;
    }

    printf("1.5 + 2.5 + 3.5 +.......+%d.5 = %.2lf\n", n, sum);

    return 0;
}

