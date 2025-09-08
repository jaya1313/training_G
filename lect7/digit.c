#include<stdio.h>
int main(){
    int n,count=0;
    printf("input any number");
    scanf("%d",&n);
    if(n==0)
   count=1;
   
     while(n>0){
        count++;
        n=n/10;
        }
        printf("it is a %d digit no.",count);
        return 0;
}