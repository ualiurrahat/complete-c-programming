#include <stdio.h>

// Define macros p and q
// Macro p will be replaced with 50, and macro q will be replaced with 60;
// Notice that q has a semicolon at the end, which will be included during macro expansion.
#define p 50
#define q 60; // Semicolon included here intentionally

int main()
{
    // Assigning value to a using macro p (p will be replaced with 50)
    int a = p; // a will be assigned the value 50

    // Assigning value to b using macro q (q will be replaced with 60;)

    int b = q; // This will result in 'int b = 60;' (double semicolon)

    // Printing the values of a and b
    printf("a = %d, b = %d\n", a, b); // Expected output: a = 50, b = 60 (with extra semicolon error)

    return 0;
}
