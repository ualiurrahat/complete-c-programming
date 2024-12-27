#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Array elements are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("%d\n");

    printf("first element = %d\n", arr[0]);
    printf("Last elemetnt = %d\n", arr[4]);
    // they will produce garbage values
    // printf("%d\n", arr[-1]);
    // printf("%d\n", arr[5]);
    // printf("%d\n", arr[100]);

    return 0;
}