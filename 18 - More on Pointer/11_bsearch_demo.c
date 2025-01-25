#include <stdio.h>
#include <stdlib.h>

/*
 * Purpose: Demonstrate bsearch() function to search in a sorted array
 *
 * bsearch() function prototype:
 * void *bsearch(const void *key, const void *base, size_t nitems,
 *               size_t size, int (*compar)(const void*, const void*))
 *
 * Prerequisites:
 * - Array must be sorted in ascending order
 * - Returns pointer to found element or NULL if not found
 *
 * Dry Run Explanation:
 * 1. Sorted Input Array: {1, 2, 5, 8, 10}
 *
 * 2. Search Process:
 *    - Divide array in half repeatedly
 *    - Compare key with middle element
 *    - Eliminate half of remaining search space
 *    - Continues until element found or search space exhausted
 *
 * Example Searches:
 * - Searching 5: Directly matches, returns pointer
 * - Searching 3: Not found, returns NULL
 */

int comparefunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int key, *item, n = 5;
    int values[] = {1, 2, 5, 8, 10};

    while (1)
    {
        printf("Enter the value of the key (0 to exit): ");
        scanf("%d", &key);
        if (key == 0)
        {
            break;
        }
        // Search for key in sorted array
        item = (int *)bsearch(&key, values, n, sizeof(int), comparefunc);
        if (item != NULL)
        {
            printf("Item found: %d\n", *item);
        }
        else
        {
            printf("Item not found in array.\n");
        }
    }
    return 0;
}