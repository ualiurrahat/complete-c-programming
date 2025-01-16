// series: 1 + 3 + 5 + ...... n = ?

#include <stdio.h>

int main()
{
    int n;
    printf("enter the last digit of the series:");
    scanf("%d", &n);

    int sum = 0, i;

    for(i = 1; i <= n; i= i + 2){
        sum = sum + i;
    }

    printf("1 + 3 + 5 + ..... + %d =  %d\n",n, sum);

   return 0;
}


