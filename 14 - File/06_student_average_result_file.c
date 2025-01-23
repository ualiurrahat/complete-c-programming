/*Now I have 3 input file "06_math.txt", "06_bangla.txt", "06_english.txt". In these file, In each line there are two numbers written with a space between them. the first number is role number, the later one is the marks for that subject of that student. Ex:

32 83 in first line of "06_math.txt", means, role no. 32 student got 83 marks in the exam.Like these each file contains numbers of 10 students. so each file has 10 lines of data. Now I need to make the average of numbers for each student and create a new text file, while their role and avg numbers will be written.
*/

#include <stdio.h>
#include <stdlib.h>
// macro for student no. and total no. of characters in a line in files
#define MAX_STUDENTS 10
#define MAX_LINE_LEN 80
int main()
{
    // file pointers for input and output file
    FILE *math_file, *bangla_file, *english_file, *output_file;

    // array to store student marks(roll, bangla,english,math marks)
    int student_data[MAX_STUDENTS][4] = {{0}};

    // open input files
    bangla_file = fopen("06_bangla.txt", "r");
    english_file = fopen("06_english.txt", "r");
    math_file = fopen("06_math.txt", "r");

    // read marks from input files
    char line[MAX_LINE_LEN];
    int roll, marks;

    // loop to read files and marks
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        // read bangla marks
        fgets(line, MAX_LINE_LEN, bangla_file);
        sscanf(line, "%d %d", &roll, &marks);
        student_data[i][0] = roll;
        student_data[i][1] = marks;

        // read math marks
        fgets(line, MAX_LINE_LEN, math_file);
        sscanf(line, "%d %d", &roll, &marks);
        student_data[i][2] = marks;

        // read english marks
        fgets(line, MAX_LINE_LEN, english_file);
        sscanf(line, "%d %d", &roll, &marks);
        student_data[i][3] = marks;
    }
    // close input files
    fclose(bangla_file);
    fclose(math_file);
    fclose(english_file);

    // open output file
    output_file = fopen("06_average.txt", "w");

    // calculate and write averaage marks on output file
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        double average = (double)(student_data[i][1] + student_data[i][2] + student_data[i][3]) / 3.0;
        fprintf(output_file, "%d %.2lf\n", student_data[i][0], average);
    }
    // close output file
    fclose(output_file);

    printf("Averagge marks calculated and written on 06_average.txt file.\n");
    return 0;
}