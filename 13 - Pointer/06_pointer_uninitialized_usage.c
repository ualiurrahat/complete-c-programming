#include <stdio.h>

// Main function
int main()
{
    int x = 10, y; // Declare and initialize integer variable x, and another uninitialized variable y
    int *p, *q;    // Declare two integer pointers p and q

    p = &x;  // Assign the address of x to the pointer p
    y = *p;  // Dereference p to store the value of x (10) into y
    *p = 15; // Modify the value of x through pointer p

    // The pointer q is uninitialized, so dereferencing it here causes undefined behavior
    *q = 20; // This line will lead to undefined behavior due to uninitialized pointer q

    // Print the values of x, y, and the values pointed to by p and q
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p: %d\n", *p);

    // Undefined behavior: accessing an uninitialized pointer q may cause a crash or incorrect result
    printf("Value of *q: %d\n", *q);

    return 0; // Indicate successful program execution
}
