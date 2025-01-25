/*
a program to find out the list of armstrong numbers.
*/


#include <stdio.h>

int main()
{
    int initial_num, final_num, i;
    printf("enter initial number:");
    scanf("%d", &initial_num);

    printf("enter final number:");
    scanf("%d", &final_num);


    int sum, temp, rem;

    for(i = initial_num; i <= final_num; i++){
         temp = i;
    while(temp != 0){
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(i == sum){
        printf("%d\n",i);
    }

     sum = 0;

    }

    return 0;

}
