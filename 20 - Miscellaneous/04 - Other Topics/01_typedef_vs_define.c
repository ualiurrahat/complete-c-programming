#include <stdio.h>

/*
 * Difference between #define and typedef:
 *
 * 1. #define:
 *    - It is a preprocessor directive.
 *    - Used for defining constants, macros, or shorthand notations.
 *    - It performs a simple textual replacement before compilation.
 *    - Does not provide type safety, which can lead to unintended behavior in some cases.
 *    - Example:
 *      #define ip int *
 *      This creates a shorthand for `int *`, but when used as `ip c, d;`,
 *      it expands to `int *c, d;` where `c` is a pointer and `d` is an integer.
 *
 * 2. typedef:
 *    - It is a C keyword used to create an alias for a data type.
 *    - Works at the compiler level and ensures type safety.
 *    - Unlike `#define`, it associates the type with the alias for all variables.
 *    - Example:
 *      typedef int *kp;
 *      When used as `kp g, h;`, both `g` and `h` are pointers to integers.
 */

#define ip int *
typedef int *kp;

int main(int argc, char *argv[])
{
    // Using #define
    int *a;  // a is an integer pointer
    ip b;    // b is also an integer pointer
    ip c, d; // c is an integer pointer but d is only an integer
    // Explanation: ip c, d is expanded to int *c, d
    // Here, c is a pointer to an integer, but d is just an integer.

    // Using typedef
    int *e;  // e is an integer pointer
    kp f;    // f is also an integer pointer
    kp g, h; // g and h are both integer pointers
    // Explanation: kp g, h means both g and h are pointers to integers.

    return 0;
}
