/* armstrong numbers : if the sum of the cube of all digtis in a number is equal to the original number it is called armstrong number.
example : 153 = 1^3 + 5^3 + 3 ^ 3 = 1 + 125 + 27 = 153,hence it is an armstrong numbers.
*/
#include <stdio.h>

int main()
{
    int n;//153
    printf("enter your number:");
    scanf("%d", &n);

    int sum, temp, rem;
    sum = 0;

    temp = n;//153
    while(temp != 0){
        rem = temp % 10;//3
        sum = sum + rem * rem * rem;//3^3 = 27 + 5^3 = 152 + 1^1 = 153
        temp = temp / 10;
    }

    if(n == sum){
        printf("%d is an armstrong number\n",n);
    }
    else{
        printf("%d is not an armstrong number\n", n);
    }

    return 0;

}
