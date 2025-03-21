/*
    File: 07_externMain.c
    =============
    - This file contains the main function.
    - It includes "07_externSupport.c" where the 'display()' function is defined.
    - Uses 'extern' to declare the 'display()' function before calling it in 'main()'.
    - Defines a global variable 'x', which is accessed using 'extern' in the support file.
*/

#include <stdio.h>
#include "07_externSupport.c" // Including the support file containing 'display()'

// Global variable 'x' (accessible in other files using 'extern')
int x = 10;

// Function declaration (defined in the support file)
extern void display();

int main()
{
    // Call the function from the support file
    display();
    return 0;
}