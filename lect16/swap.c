#include<stdio.h>

// int swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
      
//}

//without using a third variable(temp)

int swap(int *a, int *b){
    
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(){
    int a=20;
    int b=30;
    printf("before swapping a=%d, b=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping a=%d, b=%d",a,b);
}





