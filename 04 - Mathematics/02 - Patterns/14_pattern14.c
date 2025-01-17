/* for n= 4, pattern would look like this.

      * * * *
       * * *
        * *
         *

*/
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("enter n = ");
    scanf("%d", &n);

    for(row = n; row >= 1; row--)
    {
        // for space
        for(col =1; col <= n-row; col++)
        {
            printf(" ");
        }
        // for *
        for(col = 1; col <=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}

