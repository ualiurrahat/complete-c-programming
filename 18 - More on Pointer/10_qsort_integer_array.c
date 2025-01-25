#include <stdio.h>
#include <stdlib.h>

/*
 * Purpose: Demonstrate qsort() with dry run explanation
 *
 * Dry Run of qsort() Sorting Process
 *
 * Initial Array: {65, 6, 100, 1, 250}
 *
 * Step 1: First Pass Comparisons
 * - Compare 65 and 6:   65 - 6 = 59 (Positive → Swap)
 *   Array becomes: {6, 65, 100, 1, 250}
 *
 * - Compare 65 and 100: 65 - 100 = -35 (Negative → Keep Order)
 *   Array remains: {6, 65, 100, 1, 250}
 *
 * - Compare 100 and 1:  100 - 1 = 99 (Positive → Swap)
 *   Array becomes: {6, 65, 1, 100, 250}
 *
 * Step 2: Further Passes
 * - Multiple internal passes continue comparing and swapping
 *
 * Final Sorted Array: {1, 6, 65, 100, 250}
 */

// Comparison function for sorting integers
int comparefunc(const void *a, const void *b)
{
    // Subtract values to determine sorting order (ascending order)
    return (*(int *)a - *(int *)b);
    // for descending order
    // return (*(int*)b - *(int*)a);
}

int main()
{
    // Define array size and initialize array
    int n = 5;
    int values[] = {65, 6, 100, 1, 250};

    // Sort array using qsort
    qsort(values, n, sizeof(int), comparefunc);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}