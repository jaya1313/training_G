#include<stdio.h>
#include<conio.h>
int main(){

    //traffic light system

    char color;
    printf("enter the color(R,Y,G)");
    color=getche();

    switch(color)
    {
        case 'R':
        printf("STOP");
        break;

        case 'Y':
        printf("WAIT");
        break;

        case 'G':
        printf("GO");
        break;

        default:
        printf("YOU CANNOT DO ANYTHING");
        break;
    }
}