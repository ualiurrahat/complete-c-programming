/*This program dynamically allocates memory to store and
 display the marks of students from 5 classes.
 The number of students in each class is determined at runtime,
 and the program handles memory allocation failure gracefully.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare an array of pointers (to hold marks for each class) and an array for student counts
    int *ara[5], num[5];
    int n; // Variable to store the number of students in each class

    // Loop through 5 classes
    for (int i = 0; i < 5; i++)
    {
        // Prompt user to enter the number of students for the current class
        printf("Enter no. of students for class %d: ", i + 1);
        scanf("%d", &n);
        num[i] = n; // Store the number of students in the `num` array

        // Dynamically allocate memory to store marks for 'n' students
        ara[i] = (int *)malloc(n * sizeof(int));

        // Check if memory allocation was successful
        if (ara[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1; // Exit the program if allocation fails
        }

        // Loop to input marks for each student in the current class
        for (int j = 0; j < n; j++)
        {
            printf("Enter marks for student %d: ", j + 1);
            scanf("%d", &ara[i][j]);
        }
    }

    // Display the entered marks
    printf("Output: \n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Class %d: ", i + 1); // Print class number
        for (int j = 0; j < num[i]; j++)
        {
            printf("%4d", ara[i][j]); // Print marks with 4-character spacing
        }
        printf("\n"); // Newline after each class
    }
    // Free the allocated memory for each class
    for (int i = 0; i < 5; i++)
    {
        free(ara[i]);
    }

    return 0; // Indicate successful program termination
}
