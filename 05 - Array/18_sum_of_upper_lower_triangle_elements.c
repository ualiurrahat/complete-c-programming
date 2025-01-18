/* a program to find sum of upper triangle elements and lower triangle elements.

for a = 1  2   3
        4  5   6
        7  8   9
here, upper trianle elements are 2, 3, 6.
lower triangle elements are 4,7,8.

*/
#include <stdio.h>

int main()
{
    // declare matrix.

    int a[10][10];

    // declare var for loop and rows, columns.
    int i, j, rows, cols;

    // var for sum of upper and lower diagonal elements.
    int upper_sum = 0;
    int lower_sum = 0;

    // taking input for rows and columns for given matrix.

    printf("enter rows and columns of the matrix:");
    scanf("%d %d", &rows, &cols);
    while(rows != cols)
     {
        printf("rows and columns have to be equal to find diagonals.\n");
        printf("enter rows and columns of the matrix:");
        scanf("%d %d", &rows, &cols);
    }
    printf("\n");

     // getting elements for matix.
    printf("enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // printing user input matrix.
    printf("\n");
    printf("your matix is:\n");
    printf("a = ");

     for(i = 0; i < rows; i++)
    {
        printf("\t");
        for(j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // printing upper and lower triangle elements sum

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(i < j)
            {
                upper_sum = upper_sum + a[i][j];
            }
             if(i > j)
            {
                lower_sum = lower_sum + a[i][j];
            }
        }
    }



   printf("upper sum = %d\n", upper_sum);


    printf("lower sum = %d\n", lower_sum);

    return 0;
}

