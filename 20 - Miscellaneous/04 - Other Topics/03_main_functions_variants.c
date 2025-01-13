#include <stdio.h>  // For input/output operations
#include <stdlib.h> // For EXIT_SUCCESS and EXIT_FAILURE macros

int main(void)
{
    // Calling first version of main
    printf("Using int main(void): No command-line arguments allowed here.\n");

    // Running the second version of main
    int argc = 3;
    char *argv[] = {"program_name", "arg1", "arg2"};
    main_with_args(argc, argv); // Simulate command-line arguments

    // Running the third version of main
    main_array_syntax(argc, argv); // Simulate command-line arguments

    return 0;
}

/*
 * 2. int main(int argc, char **argv)
 *    - This declaration allows the program to process command-line arguments.
 *    - argc: Number of arguments passed (including program name).
 *    - argv: Array of pointers to the argument strings.
 */
int main_with_args(int argc, char **argv)
{
    printf("Using int main(int argc, char **argv):\n");
    printf("Argument count: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return EXIT_SUCCESS;
}

/*
 * 3. int main(int argc, char *argv[])
 *    - Functionally identical to int main(int argc, char **argv).
 *    - Alternative syntax to declare an array of pointers.
 */
int main_array_syntax(int argc, char *argv[])
{
    printf("Using int main(int argc, char *argv[]):\n");
    printf("Argument count: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return EXIT_FAILURE;
}
