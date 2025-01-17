/* for n = 3,
    1
    2 2
    3 3 3

    binary triangle would look like
    1
    0 0
    1 1 1

    alphabetic triangle would look like
    A
    B B
    C C C

    asterisk triangle would look like
    *
    * *
    * * *


    */
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter n = ");
    scanf("%d", &n);


    // code for number triangle.
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }

    printf("\n");
    printf("now we will do the same for binary right triangle\n");

    // code for binary triangle.
     for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", row%2);
        }
        printf("\n");
    }
     printf("\n");
    printf("now will do the same for alphabetic triangle\n");

     // code for alphabetic triangle.
      for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%c ", row+64); // adding 64 for uppercase letter.
        }
        printf("\n");
    }

     printf("\n");
    printf("now will do the same for asterisk triangle\n");

    // code for asterisk triangle.
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }




    return 0;
}
