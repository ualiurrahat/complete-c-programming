#include <stdio.h>

int main()
{
    int digit;
    printf("enter your number:");
    scanf("%d", &digit);

    int temp, rem, rev;
    rev = 0;

    temp = digit;

    while(temp != 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;

    }
    printf("sum of digit %d is %d", digit, rev);

    return 0;
}
