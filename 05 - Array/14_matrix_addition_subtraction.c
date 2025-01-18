//  a program to add and subract two matrix.

/* addition and subtraction is possible
    only when matrices having the equla number of
    rows and columns.
    */
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, rows, cols;

    printf("enter number of rows and columns for each matrix:\n");
    scanf("%d %d", &rows, &cols);



    // input value for matrix a;
    printf("enter elements for matrix a:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // input value for matrix b;
     printf("\n\n enter elements for matrix b:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    // printing a matrix
    printf("a =");
    for(i = 0; i < rows; i++)
    {

        printf("\n");
        printf("\t");
        for(j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    printf("\n");


    // printing b matrix
    printf("b =");
    for(i = 0; i < rows; i++)
    {

        printf("\n");
        printf("\t");
        for(j = 0; j < cols; j++)
        {
            printf("%d ", b[i][j]);
        }
    }

    printf("\n");

    // for matrix c which is add of a and b.
      for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }


    printf("\n");
    printf("c = a + b = ");
    for(i = 0; i < rows; i++)
    {

        printf("\n");
        printf("\t");
        for(j = 0; j < cols; j++)
        {
            printf("%d ",c[i][j]);
        }
    }



    return 0;
}

