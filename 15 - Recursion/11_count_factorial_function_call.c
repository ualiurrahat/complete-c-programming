// we will count how many times the factorial function was called.
#include <stdio.h>

// global variable to keep count of function calls
int f_calls = 0;
// Function to calculate the factorial of a number using recursion
int factorial(int n)
{
    f_calls++; // increase count of function call by 1.
    // Base case: If n is 0, return 1 (as 0! = 1 by definition)
    if (n == 0)
    {
        return 1;
    }

    // Recursive case: Return n * factorial of (n - 1)
    return n * factorial(n - 1);
}

int main()
{
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is negative; factorial is undefined for negative numbers
    if (n < 0)
    {
        printf("undefined\n"); // Output 'undefined' if the input is negative
        return 0;              // End the program if the input is invalid
    }

    // Calculate and print the factorial of the number
    printf("factorial of %d is %d\n", n, factorial(n));
    printf("Total function calls: %d\n", f_calls);

    return 0; // Indicate successful program termination
}
