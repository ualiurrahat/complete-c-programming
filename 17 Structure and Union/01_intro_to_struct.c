#include <stdio.h>

// Main function where the program execution begins
int main()
{
    // Definition of a structure named 'student' with two members: id and name
    struct student
    {
        int id; // Integer variable to store the student ID
        // char name[40]; // Character array to store the student's name
        char *name;
        // writing array here, for solution 2
        // char name[40];
    };

    // Declaring a variable 'one' of type 'struct student'
    struct student one;

    // Initializing the members of the 'one' structure
    one.id = 135; // Assigning an integer ID to 'one.id'
    // one.name = "Ualiur Rahat"; // Assigning a string to 'one.name'
    // this line produces an error.
    // NOTE: Assignment operation is not possible in character array in Cs
    // solution 1: use char pointer instead of char array inside struct.
    one.name = "Ualiur Rahat";
    // solution 2: use strcpy function
    // strcpy(one.name, "Ualiur Rahat");
    // Printing the ID and name of the student to the console
    printf("ID: %d\n", one.id);     // Displays the ID
    printf("Name: %s\n", one.name); // Displays the name

    return 0; // Indicating that the program executed successfully
}
