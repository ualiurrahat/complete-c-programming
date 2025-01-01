#include <stdio.h>

int main()
{
    // Initialize a 2D array to store marks of 3 subjects for 10 students
    // The fourth row (index 3) is for storing the total calculated marks
    int marks[4][10] = {
        {80, 70, 92, 78, 58, 83, 85, 66, 99, 81},  // Marks for Subject 1
        {75, 67, 55, 100, 91, 84, 79, 61, 90, 97}, // Marks for Subject 2
        {98, 67, 75, 89, 81, 83, 80, 90, 88, 77},  // Marks for Subject 3
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}             // Placeholder for total marks (initially 0)
    };

    int col; // Variable to iterate over the students (columns)

    // Loop through all students (columns) to calculate their total marks
    for (col = 0; col < 10; col++)
    {
        // Calculate total marks for each student using given weightage
        // 25% weightage for Subject 1 and Subject 2
        // 50% weightage for Subject 3
        marks[3][col] = marks[0][col] / 4.0 + marks[1][col] / 4.0 + marks[2][col] / 2.0;

        // Print the roll number (col + 1) and total marks for each student
        printf("Roll NO: %d   Total Marks: %d\n", col + 1, marks[3][col]);
    }

    return 0; // Indicate successful execution
}
