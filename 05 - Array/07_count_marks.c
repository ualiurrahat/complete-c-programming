/*You are given number between 1 to 9.
print the frequencies or occurences of each number
*/

#include <stdio.h>
int main()
{
    int i, j;
    // total 12 occurences of numbers ranging between 1 to 9
    int marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    // array to keep track of number's frequencies
    int marks_count[11];
    // initialize count of all number as 0 first.
    for (i = 0; i < 11; i++)
    {
        marks_count[i] = 0;
    }
    // loop to count frequencies of numbers.
    for (i = 0; i < 12; i++)
    {
        marks_count[marks[i]]++;
    }
    // print total occurences of each number
    for (int i = 0; i < 11; i++)
    {
        printf("%d : %d\n", i, marks_count[i]);
    }

    return 0;
}
