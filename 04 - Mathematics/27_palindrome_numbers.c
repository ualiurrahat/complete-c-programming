/* palindrome numbers: if a number and its reverse are same numbers, then they are called palindrome. ex: 303, 444, 101, 121 etc.

*/

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

    if(digit == rev){
        printf("%d  is a palindrome\n",digit);
    }
    else{
        printf("%d not a palindrome.\n",digit);
    }

    return 0;
}

