#include<stdio.h>

int main(){
//switchCase

/*int a=3;
switch(a)
{
    case 1:
    printf("hello");
  //  break;
    case 2:
    printf("hii");
    //break;
    case 3:
    printf("byee");
    //break;
    default:
    printf("its okay");
    //break;
}*/


int day;
printf("enter a number to print that weekday(1-7)");
scanf("%d",&day);
switch(day)
{
    case 1:
    printf("SUNDAY");
    break;

    case 2:
    printf("MONDAY");
    break;

    case 3:
    printf("TUESDAY");
    break;

    case 4:
    printf("WEDNESDAY");
    break;

    case 5:
    printf("THURSDAY");
    break;

    case 6:
    printf("FRIDAY");
    break;

    case 7:
    printf("SATURDAY");
    break;

    default:
    printf("INVALID DAY");
    break;
}





}