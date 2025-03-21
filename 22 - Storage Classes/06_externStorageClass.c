/*
    Extern Storage Class in C
    ==========================
    - All global variables belong to the 'extern' storage class by default.
    - 'extern' can be used for both variables and functions.
    - It is used to declare a variable that is defined in another block or file.
    - The 'extern' keyword does not allocate memory; it only refers to an existing variable.

    Usage Example (Multiple Files):
    --------------------------------
    file1.c:
        int x = 10; // Definition

    file2.c:
        extern int x; // Declaration (uses x from file1.c)

    - The files (file1.c and file2.c) must be part of the same project to access 'x'.
*/

#include <stdio.h>

void fun();
void fun2();

int main()
{
    // 'extern' informs the compiler that 'a' is defined elsewhere in the program.
    extern int a;

    /*
    If we remove 'extern' here, the compiler does not give an error,
    but 'a' prints a garbage value instead of using the global 'a'.

    This happens because, without 'extern', the compiler assumes 'a'
    is an implicitly declared local variable inside 'main()', which
    remains uninitialized, leading to unpredictable output.
 */

    printf("a = %d\n", a);
    fun();
    fun2();

    return 0;
}

void fun()
{
    int a = 25; // Local variable (not the global 'a')
    a++;
    printf("a = %d\n", a);
}

void fun2()
{
    printf("Hello. This is from fun2().\n");
}

// Global variable 'a' (accessible using 'extern' in main)
int a = 10;
