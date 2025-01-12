#include <stdio.h>

// Defining a structure to store the first and last names
struct nametype
{
    char first[20]; // Character array to store the first name
    char last[20];  // Character array to store the last name
};

// Defining a structure to store student information
struct student
{
    int id;               // Integer variable to store the student ID
    struct nametype name; // Nested structure to store the student's name
};

int main()
{
    struct student one; // Declaring a variable 'one' of type 'struct student'

    // Prompting the user to input the student's ID
    printf("Enter student id: ");
    scanf("%d", &one.id); // Reading the student's ID

    // Prompting the user to input the student's first name
    printf("Enter first name: ");
    scanf("%s", one.name.first); // Reading the first name (up to the first whitespace)

    // Prompting the user to input the student's last name
    printf("Enter last name: ");
    scanf("%s", one.name.last); // Reading the last name (up to the first whitespace)

    // Displaying the stored student information
    printf("ID: %d\n", one.id);                             // Displays the student's ID
    printf("Name: %s %s\n", one.name.first, one.name.last); // Displays the full name

    return 0; // Indicates successful program termination
}
