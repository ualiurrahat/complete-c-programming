#include <stdio.h>
#include <stdlib.h>

/*
This program demonstrates how to use `argc` (argument count) and `argv` (argument vector)
to work with command-line arguments in C.
*/

int main(int argc, char *argv[])
{
    /*
    Print the total number of arguments passed to the program, including the program name itself.
    `argc` represents the count of arguments, which is always at least 1 because the program's name
    or path is considered the first argument.
    */
    printf("Argument count: %d\n", argc);

    /*
    Print the first argument stored in `argv[0]`. This is always the name of the program or
    the command used to execute the program.
    */
    printf("First argument: %s\n", argv[0]);

    return 0; // Return 0 to indicate the program executed successfully.
}

/*
Expected Output Explanation:
1. If you run the program without additional arguments:
   Command: sum.out
   Output:
   Argument count: 1
   First argument: sum.out

2. If you run the program with additional arguments:
   Command: sum.out 10 20
   Output:
   Argument count: 3
   First argument: sum.out

   Explanation:
   - `argc` will include the program name (`sum.out`) and any additional arguments (`10` and `20`), so `argc = 3`.
   - `argv[0]` always stores the program name (`sum.out`).
*/
