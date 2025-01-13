#include <stdio.h>

// Typedef declarations
typedef int *ip;        // ip is an alias for int *
typedef int a100[100];  // a100 is an alias for an array of 100 integers
typedef int (*fp)(int); // fp is an alias for a pointer to a function taking an int and returning an int

// Example function for fp
int square(int x)
{
    return x * x;
}
// Adding another function for demonstration
int triple(int x)
{
    return x * 3;
}
int main()
{
    // Example 1: ip
    ip a, b, c; // a, b, c are pointers to integers
    int x = 10, y = 20, z = 30;
    a = &x;
    b = &y;
    c = &z;
    printf("Values pointed by a, b, c: %d, %d, %d\n", *a, *b, *c);

    // Example 2: a100
    a100 p, q; // p and q are arrays of 100 integers
    for (int i = 0; i < 100; i++)
    {
        p[i] = i;     // Initialize array p with values 0 to 99
        q[i] = i * 2; // Initialize array q with values 0, 2, 4, ..., 198
    }
    printf("p[10] = %d, q[10] = %d\n", p[10], q[10]);

    // Example 3: fp
    fp f1, f2;   // f1 and f2 are pointers to functions
    f1 = square; // Assign the address of square function to f1
    printf("Square of 5 using f1: %d\n", f1(5));

    f2 = triple; // Assign the address of triple function to f2
    printf("Triple of 5 using f2: %d\n", f2(5));

    return 0;
}
