#include <stdio.h>

int main()
{
    // Declare and initialize variables n1 and n2 with sample values.
    // 'n3' will store the result of the bitwise AND operation.
    int n1 = 5, n2 = 6, n3;

    // Perform bitwise AND operation on 'n1' and 'n2'.
    n3 = n1 & n2; // '&' is the bitwise AND operator.

    // Print the result of the bitwise AND operation.
    printf("%d & %d = %d\n", n1, n2, n3);

    return 0; // End of the program.
}
