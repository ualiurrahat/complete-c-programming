/*Now I have 3 input file "06_math.txt", "06_bangla.txt", "06_english.txt". In these file, In each line there are two numbers written with a space between them. the first number is role number, the later one is the marks for that subject of that student. Ex:

32 83 in first line of "06_math.txt", means, role no. 32 student got 83 marks in the exam.Like these each file contains numbers of 10 students. so each file has 10 lines of data. Now I need to make the average of numbers for each student and create a new text file, while their role and avg numbers will be written.
*/
#include <stdio.h>

#define NUM_STUDENTS 10 // Define the number of students (lines in each file)

int main()
{
    // Declare file pointers for input and output files
    FILE *fp_math, *fp_bangla, *fp_english, *fp_out;

    // File names for input and output
    char math_file[] = "06_math.txt";
    char bangla_file[] = "06_bangla.txt";
    char english_file[] = "06_english.txt";
    char output_file[] = "06_average.txt";

    // Open all files
    fp_math = fopen(math_file, "r");
    fp_bangla = fopen(bangla_file, "r");
    fp_english = fopen(english_file, "r");
    fp_out = fopen(output_file, "w");

    char line[80];
    int roll_math, roll_bangla, roll_english;
    int mark_math, mark_bangla, mark_english;

    // Debug: Print Bangla file content before processing
    printf("Bangla file content:\n");
    while (fgets(line, 80, fp_bangla) != NULL)
    {
        printf("%s", line);
    }
    rewind(fp_bangla); // Reset the file pointer to the beginning

    // Process data for each student
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        // Read Bangla marks
        fgets(line, 80, fp_bangla);
        sscanf(line, "%d %d", &roll_bangla, &mark_bangla);

        // Read English marks
        fgets(line, 80, fp_english);
        sscanf(line, "%d %d", &roll_english, &mark_english);

        // Read Math marks
        fgets(line, 80, fp_math);
        sscanf(line, "%d %d", &roll_math, &mark_math);

        // Debugging: Print values to verify correctness
        printf("Bangla: Roll: %d, Marks: %d\n", roll_bangla, mark_bangla);
        printf("English: Roll: %d, Marks: %d\n", roll_english, mark_english);
        printf("Math: Roll: %d, Marks: %d\n", roll_math, mark_math);

        // Calculate average marks
        double avg = (mark_bangla + mark_english + mark_math) / 3.0;

        // Write roll and average mark to the output file
        fprintf(fp_out, "%d %.2lf\n", roll_math, avg);
    }

    // Close all files after processing
    fclose(fp_math);
    fclose(fp_bangla);
    fclose(fp_english);
    fclose(fp_out);

    printf("File work successfully done!\n");
    return 0; // Indicate successful program termination
}
