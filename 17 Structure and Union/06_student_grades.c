#include <stdio.h>
#include <string.h>

// Typedef for a structure to store first and last name
typedef struct
{
    char first[20]; // Character array for first name
    char last[20];  // Character array for last name
} nametype;

// Typedef for a structure to store student information
typedef struct
{
    int id;        // Integer to store student ID
    nametype name; // Nested structure for student's name
    char grade[3]; // Character array to store student's grade
} studenttype;

// Function to calculate grade based on marks
void calculate_grade(studenttype s, int mark)
{
    if (mark >= 80)
    {
        strcpy(s.grade, "A+"); // Assign grade A+ for marks >= 80
    }
    else if (mark >= 70)
    {
        strcpy(s.grade, "A"); // Assign grade A for marks >= 70
    }
    else if (mark >= 60)
    {
        strcpy(s.grade, "A-"); // Assign grade A- for marks >= 60
    }
    else if (mark >= 50)
    {
        strcpy(s.grade, "B"); // Assign grade B for marks >= 50
    }
    else if (mark >= 40)
    {
        strcpy(s.grade, "C"); // Assign grade C for marks >= 40
    }
    else
    {
        strcpy(s.grade, "F"); // Assign grade F for marks < 40
    }
}

int main()
{
    studenttype student[3];     // Array of structures for 3 students
    int i, n = 3;               // Variables for loop and number of students
    int marks[] = {72, 80, 60}; // Array of marks for students

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("Enter the ID for student %d: ", i + 1);
        scanf("%d", &student[i].id); // Read student ID
        printf("Enter the first name for student %d: ", i + 1);
        scanf("%s", student[i].name.first); // Read first name
        printf("Enter the last name for student %d: ", i + 1);
        scanf("%s", student[i].name.last); // Read last name
        strcpy(student[i].grade, "");      // Initialize grade with an empty string
        printf("\n");
    }

    // Calculate grades for each student
    for (i = 0; i < n; i++)
    {
        calculate_grade(student[i], marks[i]);
    }

    // Output student details and grades
    printf("Output: \n\n");

    for (i = 0; i < n; i++)
    {
        printf("ID: %d\n", student[i].id);                                    // Print student ID
        printf("Name: %s %s\n", student[i].name.first, student[i].name.last); // Print full name
        printf("Grade: %s\n", student[i].grade);                              // Print grade
    }

    return 0; // End of program
}
// Issue: Grades are not being updated correctly because the `calculate_grade` function
// is using call-by-value. In C, when arguments are passed to a function by value, a copy
// of the variable is created inside the function, and any changes made to this copy do not
// affect the original variable outside the function. Thus, the grade in the `studenttype`
// structure is not updated in the main function when the `calculate_grade` function is called.

// To resolve this, we need to pass the structure by reference (using pointers) so that
// any changes made inside the function will directly modify the original structure's grade.

// To fix the issue, the function definition and the call should be updated to pass the
// student structure by reference (using a pointer) rather than by value.

// Updated function signature and call:
// void calculate_grade(studenttype *s, int mark)
// {
