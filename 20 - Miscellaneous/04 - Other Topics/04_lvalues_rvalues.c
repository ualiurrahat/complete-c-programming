#include <stdio.h>

int main()
{
    // What is an L-value?
    // An L-value is an expression that refers to a memory location.
    // It is something that can appear on the left side of an assignment operator ('=').
    // Examples of L-values include variables, arrays, and dereferenced pointers.

    // Example of L-value:
    int x = 10;    // 'x' is an L-value. It refers to a memory location where the value 10 is stored.
    int *ptr = &x; // 'ptr' is an L-value. It refers to a memory location where the address of 'x' is stored.

    // What is an R-value?
    // An R-value is an expression that produces a value but does not refer to a memory location.
    // It can be a constant, a literal, or an expression.
    // R-values cannot be on the left side of an assignment operator.
    // Examples of R-values include constants, expressions, and function return values.

    // Example of R-value:
    int y = 20;    // '20' is an R-value. It is a constant literal that represents a value.
    int z = x + y; // 'x + y' is an R-value. It represents an expression that evaluates to a value.

    // Examples where R-values can't be used as L-values (they cannot appear on the left side of assignment):
    // int a + b = 30;     // Error: 'a + b' is an R-value and cannot be assigned to.
    // 10 = x;             // Error: '10' is an R-value and cannot be the target of an assignment.

    // Examples where L-values can't be used as R-values (they cannot appear on the right side of assignment):
    // int *p = x;         // Error: 'x' is an L-value and cannot be assigned directly to a pointer without dereferencing.
    // x = 10 + 20;        // Valid: '10 + 20' is an R-value that evaluates to a value, and can be assigned to L-value 'x'.

    // Valid L-values and R-values:
    printf("x = %d\n", x); // Prints the value of x, which is a valid L-value.
    printf("y = %d\n", y); // Prints the value of y, which is an R-value.
    printf("z = %d\n", z); // Prints the value of z, which is an R-value.

    // Recap of rules:
    // - L-values can be assigned values, can appear on the left side of an assignment.
    // - R-values represent values or results of expressions, and cannot appear on the left side of an assignment.

    return 0;
}
