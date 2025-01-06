#include <stdio.h>

// Function to demonstrate recursion with a base case
void recurse(int count)
{
    // Base case: If the count reaches 5, stop the recursion
    if (count == 5)
    {
        return; // Exit the function when the base condition is met
    }

    // Print a message to indicate recursion progress
    printf("I am learning recursion.\n");

    // Recursive call: Increment the count and call the function again
    recurse(count + 1);

    // Optional return statement after recursion (not strictly necessary in void functions)
    return;
}

int main()
{
    // Start the recursive function with an initial count of 1
    recurse(1);

    return 0; // Indicate successful program termination
}
