// This program demonstrates pointer arithmetic with an integer array.

#include <stdio.h>

int main()
{
    int ara[] = {100, 300, 500, 700, 900};
    int *p;
    p = ara;

    // Dereferencing pointer to get the value at the first element of the array
    printf("*p: %d\n", *p);

    // Adding 1 to the value pointed by p
    printf("*p + 1: %d\n", *p + 1);

    // Dereferencing the pointer moved one step ahead to get the value of the next element
    printf("*(p + 1): %d\n", *(p + 1));

    // Adding 2 to the value pointed by p
    printf("*p + 2: %d\n", *p + 2);

    // Dereferencing the pointer moved two steps ahead to get the value of the third element
    printf("*(p + 2): %d\n", *(p + 2));

    return 0;
}
