// a program to copy elements of an array to another array.
#include <stdio.h>

int main()
{
    int array1[5] = {2,5,7,9,4};
    int array2[5], i;

    printf("array[1]=");
     for(i = 0; i < 5; i++)
     {
         printf("%d ", array1[i]);
     }
     printf("\n");

    for(i = 0; i < 5; i++)
    {
      array2[i] = array1[i];
    }

    printf("array[2]=");

    for(i = 0; i < 5; i++)
    {
        printf("%d ",array2[i]);
    }

    return 0;
}
