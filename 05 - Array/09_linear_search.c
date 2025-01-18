/* linear search.
array = {10,2,30,15,28,5};
1. if 15 in the array?
2. if yes, then what's its position?



*/

#include <stdio.h>

int main()
{

    int num[6] = {10,5,25,30,4,8};

    int value = 4;

    int pos = -1; // index of  search numbers.
    int i;

    for(i = 0; i < 6; i++)// checking whole array for value number.
    {
        if(value == num[i])
        {
            pos= i + 1;
            break;
        }

    }
    if(pos == -1)
    {
        printf("The number %d is not in the array\n", value);
    }
    else
    {
        printf("The position of %d is %d th in the array\n", value, pos);
    }

    return 0;

}

