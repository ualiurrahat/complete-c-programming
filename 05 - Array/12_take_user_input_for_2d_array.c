// taking input value for 2D array
#include <stdio.h>

int main()
{
    int a[3][4];
    int i, j;

    int row = 3;
    int col = 4;

    // input value
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // printing
    for(i = 0; i < row; i++)
    {
        printf("\n");
        for(j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
    }


    return 0;
}
