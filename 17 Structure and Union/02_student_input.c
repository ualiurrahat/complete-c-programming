#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[40];
};
int main()
{
    struct student one;

    printf("Enter ID: ");
    scanf("%d", &one.id);
    printf("Enter Name: ");
    // scanf("%s", one.name);
    // this will print only first half name, not the 2nd part name(only "Ualiur" will print)
    // code to get full name
    scanf(" %[^\n]", one.name);

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);
    return 0;
}