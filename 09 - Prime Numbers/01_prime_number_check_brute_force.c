// Brute force approach to check whether a number is prime or not
#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n)
{
    int i;

    // Any number less than 2 is not prime
    if (n < 2)
    {
        return 0; // Return 0 for non-prime
    }

    // Check divisibility from 2 to n-1
    for (i = 2; i < n; i++)
    {
        if (n % i == 0) // If n is divisible by i
        {
            return 0; // Return 0 for non-prime
        }
    }

    return 1; // Return 1 for prime
}

int main()
{
    int n;

    // Infinite loop to allow multiple inputs from the user
    while (1)
    {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n); // Take input from the user

        // Exit condition: if the user enters 0
        if (n == 0)
        {
            break; // Exit the loop
        }

        // Check if the number is prime using is_prime function
        if (1 == is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0; // Indicate successful program termination
}
