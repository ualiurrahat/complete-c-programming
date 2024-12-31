// A better approach than the previous one to detect prime numbers.
#include <stdio.h>
#include <math.h> // Required for the sqrt function

// Function to check if a number is prime
int is_prime(int n)
{
    int i, root;

    // Special case: 2 is the smallest and only even prime number
    if (n == 2)
    {
        return 1; // Return 1 for prime
    }

    // If n is even and not equal to 2, it's not a prime number
    if (n % 2 == 0)
    {
        return 0; // Return 0 for non-prime
    }

    // Calculate the square root of n to reduce the range of divisors to check
    root = sqrt(n);

    // Check divisibility only for odd numbers from 3 to the square root of n
    for (i = 3; i <= root; i = i + 2)
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

        // Check if the number is prime using the optimized is_prime function
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
