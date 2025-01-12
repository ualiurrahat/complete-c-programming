#include <stdio.h>
#include <string.h>

// Structure to store first and last name
struct nametype
{
    char first[20]; // Character array for first name
    char last[20];  // Character array for last name
};

// Structure to store student information
struct studenttype
{
    int id;               // Integer to store student ID
    struct nametype name; // Nested structure for student's name
};

int main()
{
    struct studenttype student[5]; // Array of structures for 5 students

    int i, n = 5; // Variable 'i' for loop and 'n' for the number of students

    // Loop to input details for each student
    for (i = 0; i < n; i++)
    {
        printf("Enter the ID for student %d: ", i + 1);
        scanf("%d", &student[i].id); // Read student ID

        printf("Enter the first name for student %d: ", i + 1);
        scanf("%s", student[i].name.first); // Read first name

        printf("Enter the last name for student %d: ", i + 1);
        scanf("%s", student[i].name.last); // Read last name

        printf("\n"); // Print a newline for readability
    }

    printf("Output: \n\n");

    // Loop to display details for each student
    for (i = 0; i < n; i++)
    {
        printf("ID: %d\n", student[i].id);                                    // Print student ID
        printf("Name: %s %s\n", student[i].name.first, student[i].name.last); // Print full name
    }

    return 0; // End of program
}
