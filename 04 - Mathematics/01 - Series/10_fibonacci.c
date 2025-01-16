// a program to find out the desired digit of fibonacci series.

#include <stdio.h>

int main()
{
    int n;
    printf("enter the term of the number:");
    scanf("%d", &n);



    int fibo[n-1];
    fibo[0] = 0;
    fibo[1] = 1;

    int i;

    for(i = 2; i < n; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    printf("%d\n", fibo[n-1]);
    return 0;
}

