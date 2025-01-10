#include <stdio.h>
#include <time.h> // provides the clock() functio to measure CPU time

// Function to perform multiplication
void fnc(int x, int n)
{
    x = n * 2; // This calculation does not affect 'x' in the calling function
}

int main()
{
    // Declare variables for loops, computation, and timing
    int i, j;                     // for loop iteration
    int x, n;                     // x-> stores result of calculation, n-> const value for multiplication
    clock_t start_time, end_time; // Used to record time before and after a block of operations.
    // clock_t-> a data type define in <time.h>
    // used to represent CPU(processor) time in clock ticks.
    double time_elapsed; // Stores the time taken for a block of operations.

    // Direct calculation timing
    // clock() : function used to calculate amount of CPU time used by the program
    // to end its exucution.
    start_time = clock(); // Records the CPU time before the loop starts

    n = 12345678; // Value for multiplication

    // outer loop is running 1 billion times
    for (i = 0; i < 1000000000; i++)
    {
        // inner loop is running 10 times per outer loop iteration
        for (j = 0; j < 10; j++) // Corrected inner loop condition
        {
            x = n * 2; // Perform direct calculation
        }
    }

    end_time = clock();                                              // Record CPU time at end of operation
    time_elapsed = (double)(end_time - start_time) / CLOCKS_PER_SEC; // Calculate time elapsed
    // CLOCKS_PER_SEC: A macro that specifies the number of clock tick per second.
    printf("Time for direct calculation: %lf seconds\n", time_elapsed);

    // Function call timing
    start_time = clock(); // Record start time

    n = 12345678; // Value for multiplication
    for (i = 0; i < 1000000000; i++)
    {
        for (j = 0; j < 10; j++) // Corrected inner loop condition
        {
            fnc(x, n); // Call function to perform calculation
        }
    }

    end_time = clock();                                              // Record end time
    time_elapsed = (double)(end_time - start_time) / CLOCKS_PER_SEC; // Calculate time elapsed
    printf("Time for function call: %lf seconds\n", time_elapsed);

    return 0; // Indicate successful execution
}
