#include <stdio.h>

int main()
{
     double num1,num2;
     char op;


     printf("enter an operator(+,-,*,/):\n");
     scanf("%c", &op);

      printf("enter two numbers:\n");
     scanf("%lf %lf", &num1, &num2);

     switch(op)
     {
     case '+':
        printf(" %lf + %lf = %lf\n",num1, num2, num1 + num2);
        break;

     case '-':
        printf(" %lf - %lf = %lf\n",num1, num2, num1 - num2);
        break;

     case '*':
        printf(" %lf * %lf = %lf\n",num1, num2, num1 * num2);
        break;

     case '/':
        printf(" %lf / %lf = %lf\n",num1, num2, num1 / num2);
        break;

    default:
        printf("not a valid operator\n");

     }
     return 0;
}
