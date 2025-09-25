#include<stdio.h>
int main(){

    // x pattern
    int i,j;
    int n=4;
    for(i=0;i<=n;i++){
         for(j=0;j<=n;j++){
        
            if(i==j || j==(4-i)){
                 printf("*");
             }
             else{
                 printf(" ");
             }
         }
         printf("\n");
     }
     return 0;
    }


   
