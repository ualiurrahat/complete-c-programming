// the previos version had too many function calls.
// here we are using memory to save fibonacci values
// and reducing function calls

#include <stdio.h>
#include <string.h>

// Global variable to count the number of function calls
int f_calls = 0;

// Global array to store precomputed Fibonacci numbers for memoization
int fibo[50];

// Function to calculate the nth Fibonacci number using recursion and memoization
int fib(int n)
{
    f_calls++; // Increment the function call counter

    // If the Fibonacci value for 'n' is already computed, return it
    if (fibo[n] != 0)
    {
        return fibo[n];
    }

    // Base cases: The first and second Fibonacci numbers are 1
    if (n == 1 || n == 2)
    {
        return fibo[n]; // Directly return the pre-initialized value for 1st and 2nd Fibonacci numbers
    }

    // Recursive case: Compute and store the Fibonacci value in the array for future use
    fibo[n] = fib(n - 1) + fib(n - 2);

    // Return the computed Fibonacci value
    return fibo[n];
}

int main()
{
    int n;     // Variable to store user input for the desired Fibonacci number
    char s[3]; // String to store the ordinal suffix (e.g., "st", "nd", "rd", "th")

    // Initialize the first two Fibonacci numbers in the global array
    fibo[1] = 1; // 1st Fibonacci number
    fibo[2] = 1; // 2nd Fibonacci number

    // Prompt the user to enter which Fibonacci number they want to compute
    printf("Enter which Fibonacci number you want to see: ");
    scanf("%d", &n);

    // Determine the appropriate ordinal suffix for the input number
    if (n == 1)
    {
        strcpy(s, "st"); // 1st
    }
    else if (n == 2)
    {
        strcpy(s, "nd"); // 2nd
    }
    else if (n == 3)
    {
        strcpy(s, "rd"); // 3rd
    }
    else
    {
        strcpy(s, "th"); // All other cases (e.g., 4th, 5th, etc.)
    }

    // Calculate and print the nth Fibonacci number
    printf("%d%s Fibonacci number is: %d\n", n, s, fib(n));

    // Print the total number of function calls made during the computation
    printf("Total function calls: %d\n", f_calls);

    // Print all computed Fibonacci numbers up to the nth number
    for (int i = 1; i <= n; i++)
    {
        printf("%d: %d\n", i, fibo[i]); // Print the Fibonacci number for each position
    }

    return 0; // Indicate successful program termination
}
