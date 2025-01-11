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
        scanf("%d", &marks[i]); // Input the mark for each student
    }

    // Display the entered marks
    printf("Now here you can see the values: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", marks[i]); // Output each student's mark
    }

    // Free the dynamically allocated memory after use
    free(marks);

    return 0; // Return 0 to indicate successful execution
}
