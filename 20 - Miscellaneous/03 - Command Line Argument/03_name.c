#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check if the number of command-line arguments is exactly 2 (program name + one argument)
    if (argc != 2)
    {
        // If not, print an error message and provide instructions to the user
        printf("Please enter one argument (your name) \n");
        return 1; // Exit the program with a non-zero value indicating an error
    }

    // If the correct number of arguments is provided, greet the user with their name
    printf("Welcome %s\n", argv[1]);

    return 0; // Exit the program successfully
}

/*
Commands to compile and run this program:
1. gcc 03_name.c -o name.exe
   // This command compiles the source file '03_name.c' and creates an executable named 'name.exe'.
   // The '-o name.exe' option explicitly specifies the name of the output executable.

2. gcc 03_name.c
   // This command compiles the source file '03_name.c' and creates an executable named 'a.exe' by default.
   // If the '-o' option is not used, GCC names the output executable 'a.exe' by default on Windows.

3. gcc
   // If only 'gcc' is written without specifying a source file, the compiler does nothing and waits for input.
   // It enters an interactive mode, expecting code to be entered manually or through redirection.
*/
