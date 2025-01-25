// This program demonstrates the use of void pointers to store addresses of different data types.

#include <stdio.h>

int main()
{
    void *vp; // Declare a void pointer
    int n = 10;
    vp = &n; // Assign address of n to the void pointer

    // Print the address of n and the value stored in the void pointer
    printf("Address of n: %p\n", &n);
    printf("Value of vp: %p\n", vp);

    // Dereference the void pointer by typecasting it to int* and accessing the content
    printf("Content of vp: %d\n", *((int *)vp));

    return 0;
}
