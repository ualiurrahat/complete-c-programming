// if there is only one line of code inside if statement, it is okay to not use curly braces.
//But don't practice this.
// else if only checks one time and if it meets the condition it does not check other options.
// however, if checks all the if statements whether it does not matter meeting up the condition.

#include <stdio.h>

int main()
{
    double marks;

    printf("enter your marks:");
    scanf("%lf", &marks);
    while( marks > 100)
    {
        printf("marks should not be more than 100\n");
        printf("enter your marks:");
        scanf("%lf", &marks);
    }

    if(marks >= 80)
        printf("A+\n");

   else if(marks >= 70)//use only if on else if place and see the difference.
        printf("A\n");
    else if(marks >= 60)
        printf("A-\n");
    else if (marks >= 50)
        printf("B\n");
    else if (marks >=40 )
        printf("C\n");
    else if (marks >=33)
        printf("D\n");
    else
        printf("Failed\n");


    return 0;
}
