#include<stdio.h>
#include<conio.h>
int main(){

    //simple calculator using c

    float num1,num2;
printf("enter 1st number ");
scanf("%f",&num1);
printf("enter 2nd number ");
scanf("%f",&num2);

char op;
printf("enter an operator to execute(+,-,*,/)");
op=getche();
switch(op)
{
    case '+':
    printf("\nsum is%f",num1+num2);
    break;

    case '-':
    printf("\nsubstraction is%f",num1-num2);
    break;

    case '*':
    printf("\nmultipication is%f",num1*num2);
    break;

    case '/':
    if(num2!=0)
    printf("\ndivision is%f",num1/num2);
    else
    printf("\nyou cannot divide");
    break;
}
}