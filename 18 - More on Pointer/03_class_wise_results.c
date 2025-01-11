#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare a pointer to hold an array of integer pointers (for 2D array simulation)
    int **ara;

    // Array to store the number of students in each class
    int num[12];

    // Variables for loop counters, number of classes, and students per class
    int i, j, total_classes, n;

    // Prompt the user for the total number of classes
    printf("Enter the total number of classes: ");
    scanf("%d", &total_classes);

    // Allocate memory for the array of pointers (one for each class)
    ara = (int **)malloc(sizeof(int *) * total_classes);

    // Check if memory allocation was successful
    if (ara == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit with error if allocation fails
    }

    // Loop through each class
    for (i = 0; i < total_classes; i++)
    {
        // Prompt for the number of students in the current class
        printf("Please enter the number of students in class %d: ", i + 1);
        scanf("%d", &n);
        num[i] = n; // Store the number of students for later use

        // Allocate memory for storing marks of all students in the current class
        ara[i] = (int *)malloc(sizeof(int) * n);

        // Check if memory allocation was successful for the current class
        if (ara[i] == NULL)
        {
            printf("Memory allocation failed for class %d\n", i + 1);

            // Free previously allocated memory before exiting
            for (int k = 0; k < i; k++)
            {
                free(ara[k]); // Free memory allocated for previous classes
            }
            free(ara); // Free the main array of pointers
            return 1;  // Exit with error
        }

        // Prompt for and store the marks of each student in the current class
        for (j = 0; j < n; j++)
        {
            printf("Please enter the mark for student %d: ", j + 1);
            scanf("%d", &ara[i][j]);
        }
    }

    // Display the stored marks for all classes
    printf("Output:\n");
    for (i = 0; i < total_classes; i++)
    {
        printf("Class %d: ", i + 1);
        for (j = 0; j < num[i]; j++)
        {
            printf("%4d", ara[i][j]); // Print each student's mark
        }
        printf("\n");
    }

    // Free the dynamically allocated memory for each class
    for (i = 0; i < total_classes; i++)
    {
        free(ara[i]); // Free the memory for student marks in each class
    }

    // Free the main array of pointers
    free(ara);

    return 0; // Return 0 to indicate successful execution
}
