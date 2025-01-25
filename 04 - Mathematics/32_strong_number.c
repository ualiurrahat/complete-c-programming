/*strong number : if the sum of the factorial of each digit in a number is equal to the number itself ,then it is called the strong number.
ex: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
*/

#include <stdio.h>

int main()
{
    int num, sum, temp, rem, fact, i;
    printf("enter your number:");//145
    scanf("%d", &num);

    sum = 0;
    temp = num;

    while(temp != 0){
        rem = temp % 10;//5

        fact = 1;
        for(i = 1; i <= rem; i++){
            fact = fact * i;
        }


        sum = sum + fact;
        temp = temp / 10;// 14 then 1
    }

    if(sum == num){
        printf("%d is a strong number\n", num);
    }
    else{
        printf("%d is not a strong number\n", num);
    }

    return 0;

}

