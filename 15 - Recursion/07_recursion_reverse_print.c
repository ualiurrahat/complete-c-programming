#include <stdio.h>

// Function to demonstrate recursion with reverse printing
void recurse(int count)
{
    // Base case: If the count exceeds 5, stop the recursion
    if (count > 5)
    {
        return; // Exit the function when the base condition is met
    }

    // Recursive call: Increment the count and call the function again
    recurse(count + 1);

    // Print the current value of 'count' after returning from recursion
    printf("Count = %d\n", count);
}

int main()
{
    // Start the recursive function with an initial count of 1
    recurse(1);

    return 0; // Indicate successful program termination
}
