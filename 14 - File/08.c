#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = fopen("08_input.txt", "r");
    if (fp == NULL)
    {
        perror("Can't open file.\n");
        return EXIT_FAILURE;
    }
    int ch;

    ch = fgetc(fp);
    printf("%c\n", (char)ch); // A
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // B

    fseek(fp, 0, 0);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // A

    fseek(fp, 0, SEEK_SET);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // A

    fseek(fp, 0, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // B

    fseek(fp, sizeof(char) * 3, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // F

    fseek(fp, 0, SEEK_END); // file end reads emtpy character
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    fclose(fp);

    return 0;
}