#include <stdio.h>

// Main function
int main()
{
    int x = 10, y; // Declare and initialize integer variable x, and an uninitialized variable y
    int *p, *q;    // Declare two integer pointers p and q

    p = &x; // Assign the address of x to pointer p
    q = &y; // Assign the address of y to pointer q

    y = *p;  // Dereference pointer p to assign the value of x (10) to y
    *p = 15; // Modify the value of x through pointer p

    *q = 20; // Modify the value of y through pointer q

    // Print the values of x, y, and the values pointed to by p and q
    printf("Value of x: %d\n", x);   // x is now 15
    printf("Value of y: %d\n", y);   // y is now 10 (the value copied from x)
    printf("Value of *p: %d\n", *p); // *p is 15 (the updated value of x)
    printf("Value of *q: %d\n", *q); // *q is 20 (the updated value of y)

    return 0; // Indicate successful program execution
}
