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

int main()
{
    // Declare a function pointer that can point to functions
    // taking two integers and returning an integer
    int (*fnc)(int, int);

    // Initialize two integer variables
    int n1 = 10, n2 = 5;

    // Point the function pointer to the add function
    fnc = &add;
    // Call the function through the pointer and print the result
    printf("Result (Addition): %d\n", fnc(n1, n2));

    // Point the function pointer to the sub function
    fnc = &sub;
    // Call the function through the pointer and print the result
    printf("Result (Subtraction): %d\n", fnc(n1, n2));

    return 0;
}