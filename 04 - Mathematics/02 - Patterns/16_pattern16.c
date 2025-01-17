/* for n=5, pattern would look like this

    *
    **
    *  *
    *    *
    * * * *
*/

#include <stdio.h>

int main()
{
    int n;
    int col, row;

    printf("enter n = ");
    scanf("%d", &n);

    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= n; col++)
        {
            if(col == 1 || row ==n || row==col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;

}


