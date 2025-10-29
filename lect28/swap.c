#include<stdio.h>
// swapping of 2 numbers using xor
int main(){
    int a=5;
    int b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swaping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
}