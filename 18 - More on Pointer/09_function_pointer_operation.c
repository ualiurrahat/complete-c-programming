#include <stdio.h>

// Function to add two integers
int add(int n1, int n2)
{
    return n1 + n2;
}

// Function to subtract two integers
int sub(int n1, int n2)
{
    return n1 - n2;
}

// Higher-order function that takes a function pointer as an argument
// This allows dynamic selection of operation at runtime
int operate(int (*op)(int, int), int a, int b)
{
    return op(a, b);
}

int main()
{
    // Declare and initialize two integer variables
    int n1 = 10, n2 = 5;

    // Call operate function with add function pointer
    printf("Result (Addition): %d\n", operate(&add, n1, n2));
    // printf("Result (Addition): %d\n", operate(add,n1,n2)); works fine
    // cause: function name can be used as address also. just like array.

    // Call operate function with sub function pointer
    printf("Result (Subtraction): %d\n", operate(&sub, n1, n2));

    return 0;
}