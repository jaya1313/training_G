#include<stdio.h>

//pointer

    // int x=5;
    // int *a=&x;
    // printf("%d\n",x);
    // printf("%d\n",&x);
    // printf("%d\n",a);
    // printf("%d\n",*a);

    //call by value

int sum(int a,int b){
    a=20;
    b=20;
    return a+b;
}

int main(){

    int a=5;
    int b=6;
    int data= sum(a,b);
    printf("%d\n",data);
    printf("%d",a+b);
}



