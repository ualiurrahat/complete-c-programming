/* local var : variable within a certain functions.


*/
#include <stdio.h>

int a = 10;

int main()
{
    int a = 2;// local variable
    int b = 3;// local variable

    printf("inside main function the value of a is %d\n",a);
    display();

    return 0;
}

void display()
{

    printf("inside display function a = %d\n",a);
}
