/* for n=4, pattern would look like this,
         1
       1 2 1
     1  2 3 2 1
    1 2 3 4 3 2 1
    */

#include <stdio.h>

int main()
{
    int n, row, col;
    int count = 0;

    printf("enter n = ");
    scanf("%d", &n);

    for(row = 1; row<= n; row++)
    {
        for(col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        for(col = 1; col <=row; col++)
        {
            printf("%d", col);
        }
        for(col = row-1; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
