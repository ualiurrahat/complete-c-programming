#include <stdio.h>
#include <string.h>

// Global variable to count the number of function calls
int f_calls = 0;

// Function to calculate the nth Fibonacci number using recursion
int fib(int n)
{
    f_calls++; // Increment the function call counter

    // Base cases: The first and second Fibonacci numbers are 1
    if (n == 1 || n == 2)
    {
        return 1;
    }

    // Recursive case: Sum of the (n-1)th and (n-2)th Fibonacci numbers
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;     // Variable to store user input for the desired Fibonacci number
    char s[3]; // String to store the ordinal suffix (e.g., "st", "nd", "rd", "th")

    // Prompt the user to enter which Fibonacci number they want to see
    printf("Enter which Fibonacci number you want to see: ");
    scanf("%d", &n);

    // Determine the appropriate ordinal suffix for the input number
    if (n == 1)
    {
        strcpy(s, "st"); // First number
    }
    else if (n == 2)
    {
        strcpy(s, "nd"); // Second number
    }
    else if (n == 3)
    {
        strcpy(s, "rd"); // Third number
    }
    else
    {
        strcpy(s, "th"); // All other numbers
    }

    // Calculate and print the nth Fibonacci number
    printf("%d%s Fibonacci number is: %d\n", n, s, fib(n));

    // Print the total number of function calls made during the computation
    printf("Total function calls: %d\n", f_calls);

    return 0; // Indicate successful program termination
}
