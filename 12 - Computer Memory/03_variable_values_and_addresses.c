#include <stdio.h>

// Main function
int main()
{
    char ch1 = 'A', ch2 = 'B'; // Declare and initialize character variables
    int n1 = 100, n2 = 100000; // Declare and initialize integer variables

    // Print the value and address of ch1
    printf("Value of ch1 = %c,\t", ch1);
    printf("Address of ch1 = %p\n", &ch1);

    // Print the value and address of ch2
    printf("Value of ch2 = %c,\t", ch2);
    printf("Address of ch2 = %p\n", &ch2);

    // Print the value and address of n1
    printf("Value of n1 = %d,\t", n1);
    printf("Address of n1 = %p\n", &n1);

    // Print the value and address of n2
    printf("Value of n2 = %d,\t", n2);
    printf("Address of n2 = %p\n", &n2);

    return 0; // Indicate successful program execution
}
