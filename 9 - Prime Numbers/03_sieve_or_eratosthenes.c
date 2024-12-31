#include <stdio.h>
#include <math.h>

// Define the size of the array for the sieve
#define size 40
int ara[size]; // Array to mark prime and non-prime numbers

// Function to print the current state of the sieve array
void print_ara()
{
    int i;

    // Print the values in the array
    for (i = 2; i < size; i++)
    {
        printf("%4d", ara[i]);
    }
    printf("\n");

    // Print a separator line for clarity
    for (i = 2; i < size; i++)
    {
        printf("­­­­");
    }
    printf("\n");

    // Print the indices corresponding to the array values
    for (i = 2; i < size; i++)
    {
        printf("%4d", i);
    }
    printf("\n\n\n");
}

// Function to generate prime numbers using the Sieve of Eratosthenes
void sieve()
{
    int i, j, root;

    // Initialize the array: assume all numbers are prime (1)
    for (i = 2; i < size; i++)
    {
        ara[i] = 1;
    }

    // Calculate the square root of the size for optimization
    root = sqrt(size);

    // Print the initial state of the sieve array
    print_ara();

    // Mark non-prime numbers in the array
    for (i = 2; i <= root; i++)
    {
        if (ara[i] == 1) // If i is still marked as prime
        {
            for (j = 2; i * j < size; j++) // Mark all multiples of i as non-prime
            {
                ara[i * j] = 0;
            }
            // Print the state of the sieve after marking multiples
            print_ara();
        }
    }
}

// Function to check if a number is prime using the sieve
int is_prime(int n)
{
    // Numbers less than 2 are not prime
    if (n < 2)
    {
        return 0;
    }

    // Return the precomputed value from the sieve array
    return ara[n];
}

int main()
{
    int n;

    // Generate the sieve of Eratosthenes
    sieve();

    // Loop to take user input and check primality
    while (1)
    {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n); // Take input from the user

        // Exit condition: if the user enters 0
        if (n == 0)
        {
            break;
        }

        // Check if the number exceeds the precomputed size
        if (n >= size)
        {
            printf("The number should be less than %d\n", size);
            continue;
        }

        // Check if the number is prime using the sieve
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
