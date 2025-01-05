#include <stdio.h>

int main()
{
    // Declare two integer variables to store user input
    int n, m;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    // Use XOR to check if the numbers are equal
    if (n ^ m)
    {
        // If XOR result is non-zero, numbers are not equal
        puts("Numbers are not equal.");
    }
    else
    {
        // If XOR result is zero, numbers are equal
        puts("Numbers are equal.");
    }
    // puts by default puts a newline. so no need to add \n after the string.
    return 0;
}
