#include <stdio.h>

// Function to demonstrate simple recursion with a counter
void recurse(int count)
{
    // Base case: If the count exceeds 5, stop the recursion
    if (count > 5)
    {
        return; // Exit the function when the base condition is met
    }

    // Print the current value of 'count'
    printf("Count = %d\n", count);

    // Recursive call: Increment the count and call the function again
    recurse(count + 1);
}

int main()
{
    // Start the recursive function with an initial count of 1
    recurse(1);

    return 0; // Indicate successful program termination
}
