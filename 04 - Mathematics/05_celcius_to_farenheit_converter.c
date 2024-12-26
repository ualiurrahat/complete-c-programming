/*You are given the temperatuere in celsius scale
Convert it and print it into farenheit scale*/
#include <stdio.h>

int main()
{
    double celsius, farenheit;
    printf("Enter the temperatue in Celsius:");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;
    printf("The temperature in Farenheit is: %lf\n", farenheit);
    return 0;
}