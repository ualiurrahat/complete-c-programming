/* for n = 3, pattern would look like this,
        1 2 3
        1 2
        1
        */

#include <stdio.h>

int main()
{
    int row, col, n;
    printf("enter n = ");
    scanf("%d", &n);

    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}

