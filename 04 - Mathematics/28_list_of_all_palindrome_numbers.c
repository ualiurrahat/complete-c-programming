// a program to find out a list of palindrome numbers from a given range.
// palindrome: actual number = reverse number..

#include <stdio.h>

int main()
{
    int initial_num, final_num, i;

    printf("enter initial number:");
    scanf("%d", &initial_num);

    printf("enter final number:");
    scanf("%d", &final_num);

    int temp, rem, rev = 0;

    for(i = initial_num; i <= final_num;i++)
    {
        temp =i;
        while(temp != 0)
        {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;

        }
        if(i == rev)
        {
            printf("%d\n",i);
        }

        rev = 0;

    }

    return 0;

}
