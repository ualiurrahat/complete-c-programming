
/* for n = 3, pattern would look like
         1
        12
       123

 note : when n = 3, row 1, value 1, space 2
                    row 2, value 2, space 1
                    row 3, value 3, space 0.
                    so space = n - row.

 for asterisk pattern.
         *
        **
       ***


  */


#include <stdio.h>

int main()
{
    int row,col;
    int n;
    printf("enter n = ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        // printing space.
        for(col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // for printing value.
        for(col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    printf("\n");
    printf("star pattern:\n");

    for(row = 1; row <= n; row++)
    {
        // printing space.
        for(col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // for printing value.
        for(col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
