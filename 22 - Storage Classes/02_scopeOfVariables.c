#include <stdio.h>

// Global variable (Program scope)
int a = 50;

// Function to demonstrate function scope
void fun()
{
    // Local variable 'a' inside fun (Function scope)
    int a = 25;
    printf("Inside fun function, a = %d\n", a);
}

// Function to demonstrate access to global variable
void fun2()
{
    // Uses global variable 'a' since no local variable 'a' exists in this function
    printf("Inside fun2 function: a = %d\n", a);
}

int main()
{
    // Local variable 'a' inside main function (Function scope)
    int a = 8;

    {
        // Block 1
        // Variable 'a' here has block scope and hides 'a' from main
        int a = 10;
        printf("Inside block 1, a = %d\n", a);
    }

    {
        // Block 2
        // No new 'a' declared, so it uses 'a' from main
        printf("Inside block 2, a = %d\n", a);
    }

    // Modifying 'a' from main scope
    a++;
    printf("Inside main function, a = %d\n", a);

    // Calling functions to demonstrate function and global scope
    fun();
    fun2();

    return 0;
}
