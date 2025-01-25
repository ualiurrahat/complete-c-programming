#include <stdio.h>

int main()
{
    int digit;
    printf("enter your digit:");
    scanf("%d", &digit);//123

    int temp, rem, sum;
    sum = 0;

    temp = digit;//123

    while(temp != 0){
        rem = temp % 10;//3
        sum = sum + rem;// 3 and then 2 and last 1 . total 6
        temp = temp / 10;// 12 and then 2 successively

    }
    printf("sum of digit %d is %d", digit, sum);

    return 0;
}

