#include <stdio.h>

int main()
{
    int choice;
    double celsius,convert_to_far,farenheit,convert_to_cel;

    printf("Temperature conversion menu:\n");
    printf("1.celsius to farenheit:\n");
    printf("2.farenheit to celsius:\n");
    printf("enter your choice:\n");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("\n");
        printf("enter the temperature in celsius:\n");
        scanf("%lf", &celsius);
        convert_to_far = (1.8 * celsius) + 32;
        printf("the converted temperature in farenheit is %lf\n",convert_to_far);
        break;

    case 2:
        printf("\n");
        printf("enter the temperature in farenheit:\n");
        scanf("%lf", &farenheit);
        convert_to_cel = ( 5 * farenheit - 160) / 9 ;
        printf("the converted temperature in celsius is %lf\n",convert_to_cel);
        break;

    default:
        printf("\n");
        printf("not a right option\n");
    }
    return 0;
}
