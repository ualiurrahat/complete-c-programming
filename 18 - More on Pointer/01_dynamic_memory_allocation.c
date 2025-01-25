#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare a pointer to store the dynamically allocated array of marks
    int *marks;

    // Declare loop variables and a variable for the number of students
    int i, n;

    // Prompt the user to enter the number of students
    printf("Please enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of 'n' integers to store the marks
    marks = (int *)malloc(sizeof(int) * n);
    // marks = (int *) calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (marks == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1; // Return with error code if allocation fails
    }

    // Prompt the user to enter the marks for each student
    printf("Please enter the mark for each student: \n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]); // Input the mark for each student
    }

    // Display the entered marks
    printf("Output\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: Marks %d\n", i + 1, marks[i]); // Output each student's mark
    }

    // Free the dynamically allocated memory after use
    free(marks);

    return 0; // Return 0 to indicate successful execution
}
