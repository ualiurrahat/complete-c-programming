#include <stdio.h>

// Function to demonstrate recursion with both pre-recursive and post-recursive actions
void recurse(int count)
{
    // Base case: If the count exceeds 5, stop the recursion
    if (count > 5)
    {
        return; // Exit the function when the base condition is met
    }

    // Pre-recursive action: Print the current value of 'count' before making the recursive call
    printf("count = %d\n", count);

    // Recursive call: Increment the count and call the function again
    recurse(count + 1);

    // Post-recursive action: Print the current value of 'count' after returning from the recursion
    printf("Count = %d\n", count);
}

int main()
{
    // Start the recursive function with an initial count of 1
    recurse(1);

    return 0; // Indicate successful program termination
}
