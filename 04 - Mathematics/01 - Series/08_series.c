// series: 1^2 * 2^2  * 3^2 * ......* n^2 = ?

#include <stdio.h>

int main()
{
    int n;
    printf("enter the last  number of the seris:");
    scanf("%d", &n);

    int i, sum = 1;


    for(i = 1; i <= n; i++){
        sum = sum * i * i;
    }
    printf("1^2  * 2^2 * 3^2 * 4^2 * ....... * %d^2 = %d\n", n,sum);
    return 0;
}

