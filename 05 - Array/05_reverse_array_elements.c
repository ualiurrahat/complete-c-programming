/*You are given an array. You need to reverse the index of the array
ex: a[] = {1,2,3,4,5}
output: a[] = {5,4,3,2,1}
*/
#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    printf("input array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n");
    int temp;
    for (int i = 0, j = 9; i <= 4; i++, j--)
    {
        temp = a[j]; // temp = 100
        a[j] = a[i]; // a[9] = 10
        a[i] = temp; // a[0] = 100
    }
    printf("output array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}