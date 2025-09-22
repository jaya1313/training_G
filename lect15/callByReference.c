#include<stdio.h>

int sum(int *a,int *b){
     *a=20;
     *b=30;
     return *a+*b;
}

int main(){
    int a=5;
    int b=6;
    int s=sum(&a,&b);
    printf("%d\n",s);
    printf("%d",a+b);

}