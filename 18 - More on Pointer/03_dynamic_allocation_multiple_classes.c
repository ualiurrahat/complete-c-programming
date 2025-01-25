// This program dynamically allocates memory to store and display the marks of students across a user-defined number of classes.
// Each class can have a variable number of students, and the program ensures proper memory management.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **ara, num[12];
    int total_classes, n;

    printf("Enter the total no. of classes: ");
    scanf("%d", &total_classes);

    // Allocate memory for storing pointers to each class
    ara = (int **)malloc(sizeof(int *) * total_classes);
    if (ara == NULL)
    {
        printf("memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < total_classes; i++)
    {
        printf("enter the no. of students for class %d: ", i + 1);
        scanf("%d", &n);
        num[i] = n;

        // Allocate memory for storing student marks for the current class
        ara[i] = (int *)malloc(sizeof(int) * n);
        if (ara[i] == NULL)
        {
            printf("Memory Allocation Failed for class %d\n", i + 1);
            return 1;
        }

        // Input marks for each student in the current class
        for (int j = 0; j < n; j++)
        {
            printf("enter marks for student %d: ", j + 1);
            scanf("%d", &ara[i][j]);
        }
    }

    // Display the marks for each class
    printf("output\\n");
    for (int i = 0; i < total_classes; i++)
    {
        printf("Class %d: ", i + 1);
        for (int j = 0; j < num[i]; j++)
        {
            printf("%4d", ara[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < total_classes; i++)
    {
        free(ara[i]); // Free memory for each class
    }
    free(ara); // Free memory for the array of pointers

    return 0;
}
