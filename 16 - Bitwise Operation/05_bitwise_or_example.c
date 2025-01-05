#include <stdio.h>

int main()
{
    // Declare and initialize variables 'n1' and 'n2' with sample values.
    // 'n3' will store the result of the bitwise OR operation.
    int n1 = 5, n2 = 6, n3;

    // Perform bitwise OR operation on 'n1' and 'n2'.
    n3 = n1 | n2; // '|' is the bitwise OR operator.

    // Print the result of the bitwise OR operation.
    printf("%d | %d = %d\n", n1, n2, n3);

    return 0; // End of the program.
}
