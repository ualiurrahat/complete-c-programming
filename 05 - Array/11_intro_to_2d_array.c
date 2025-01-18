/* intro to 2D array / matrix array

declaration: data_type array_name [row_size][col_size];

no. of total elements: row_size * col_size;



*/
#include <stdio.h>

int main()
{
    int a[3][4] = { {2,5,7,8}, {3,9,10,12}, {18,22,28,30} };

    // printing
    printf("%d\n", a[0][0]);

    int row = 3;
    int col = 4;
    int i, j;
    // all printing
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
    }


    return 0;
}
