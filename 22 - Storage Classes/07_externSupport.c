/*
    File: 07_externSupport.c
    =========================
    - This file defines the function 'display()', which uses the 'extern' keyword
      to access the global variable 'x' defined in main.c.
    - Modifies the value of 'x' and prints it.
*/

#include <stdio.h>

void display()
{
    // Using 'extern' to access the global variable 'x' from main.c
    extern int x;

    printf("Hello from support file.\n");
    printf("Initially, x = %d\n", x);

    // Modifying the global variable 'x'
    x = x + 10;
    printf("x after incremented by 10, x = %d\n", x);
}