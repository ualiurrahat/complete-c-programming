/* linear search.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,value; // value var is to store the numbers which we're gonna find.
    int *num;

    // input for total elements.
    printf("enter number of total elements in your array:\n");
    scanf("%d", &n);

    //allocating memory for array.

    num = (int *)malloc(n*sizeof(int));

    // user input for array elements.

    printf("fill your array with elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    // printing the array.
    printf("Here is your given array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }

    printf("\n");


    // here comes the search part.
    printf("Enter the number you want to find:\n");

    // putting the search number in value variable.
    scanf("%d", &value);

    int pos = -1; // index of  search numbers.

    for(i = 0; i < n; i++)// checking whole array for value number.
    {
        if(value == num[i])
        {
            pos= i + 1;
            break;
        }

    }
    printf("\n");

    // checking if the number is in the array and printing results.
    if(pos == -1)
    {
        printf("Sorry!\n");
        printf("The number %d is not in the array\n", value);
    }
    else
    {
        printf("Good Luck!\n");
        printf("The position of %d is %d th in the array\n", value, pos);
    }



    return 0;

}
