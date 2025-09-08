#include<stdio.h>

int main(){
       int n,i;
       printf("enter number to check prime or not ");
       scanf("%d",&n);

        if(n<=1){
            printf("not prime");
           return 0;
        }
         
       for(i=2;i<n;i++){

        if(n%i==0){
            break;
        }
        
        }
        if(i<n){
            printf("%d is not prime.",n);
        }
        else{
            printf("%d is prime",n);
        }
       return 0;
    }