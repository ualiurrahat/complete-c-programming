// writing matrices using 2D array
#include <stdio.h>

int main()
{
    int a[3][4], b[3][4];
    int i, j;

    int row = 3;
    int col = 4;

    // input value for a matrix.
    printf("enter elements for matrix a:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // input value for b matrix.

    printf("\n\n enter elements for matrix b:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    // printing a matrix
    printf("a =");
    for(i = 0; i < row; i++)
    {
        printf("\n");
        printf("\t");
        for(j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    // printing b matrix
    printf("b =");
    for(i = 0; i < row; i++)
    {

        printf("\n");
        printf("\t");
        for(j = 0; j < col; j++)
        {
            printf("%d ", b[i][j]);
        }
    }



    return 0;
}

