/*
If we want to send arguments to our program through the terminal,
they must be passed to the main() function.

- The main() function must have two parameters:
  1. int argc: Argument count (total number of arguments passed)
  2. char *argv[]: Argument vector (array of strings containing the arguments)

Key Notes:
- The name of these parameters can be any valid identifier, but traditionally, we use `argc` and `argv`.
- If no arguments are passed, `argc` will still be 1 because the first element in `argv` (argv[0])
  always stores the command used to execute the program.

Example:
For the command `./program 5 7`,
- argc = 3 (includes `./program`, `5`, and `7`)
- argv[0] = "./program"
- argv[1] = "5"
- argv[2] = "7"
*/

/* Including standard libraries:
   - stdio.h: Provides functions for input and output (e.g., printf).
   - stdlib.h: Provides general utility functions, such as atoi for string-to-integer conversion.
*/
/*
How to Run this Code Using Terminal:
1. Navigate to the directory containing the file:
   C:\complete-c-programming\20 - Miscellaneous\03 - Command Line Argument>
2. Compile the program using the following command:
   gcc 01_cmdarg.c -o sum.out
3. Execute the program with two arguments (e.g., 5 and 7) as follows:
   sum.out 5 7
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* Declare variables to store two numbers and their sum. */
    int n1, n2, sum;

    /*
    Convert command-line arguments from strings to integers.
    - argv[1] and argv[2] are expected to be the two numbers passed as arguments.
    - atoi (ASCII to Integer) is used to perform the conversion.
    */
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    /*
    The atoi() function (ASCII to Integer), defined in <stdlib.h>, converts a numeric string to an integer.
    Syntax: int atoi(const char *str);
    It stops conversion at the first non-numeric character and does not perform error checking.
    For example, "1234" becomes 1234, while "12abc" becomes 12.
    */

    /* Calculate the sum of the two numbers. */
    sum = n1 + n2;

    /*
    Display the result in the format: "n1 + n2 = sum".
    Example Output:
    If the input is `./sum.out 5 7`, the output will be:
    "5 + 7 = 12"
    */
    printf("%d + %d = %d\n", n1, n2, sum);

    /* Indicate that the program completed successfully. */
    return 0;
}
