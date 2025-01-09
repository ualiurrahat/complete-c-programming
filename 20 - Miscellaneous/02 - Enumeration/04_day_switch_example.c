#include <stdio.h>

// Define an enumeration to represent days of the week
enum DAY
{
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main()
{
    // Declare a variable of enum type to store the current day
    enum DAY today;

    // Assign a value to the variable
    today = THURSDAY;

    // Use a switch statement to perform actions based on the value of 'today'
    switch (today)
    {
    case SUNDAY:
        printf("Today is Sunday. Hell of work today.\n");
        break;
    case MONDAY:
        printf("Today is Monday. Need to work better.\n");
        break;
    case TUESDAY:
        printf("Today is Tuesday. So much work today.\n");
        break;
    case WEDNESDAY:
        printf("Today is Wednesday. I am tired.\n");
        break;
    case THURSDAY:
        printf("Today is Thursday. Need to sleep well.\n");
        break;
    case FRIDAY:
        printf("Today is Friday. Good Holiday.\n");
        break;
    case SATURDAY:
        printf("Today is Saturday. Holidays are gone!\n");
        break;
    default:
        printf("Invalid day!\n");
    }

    return 0;
}
