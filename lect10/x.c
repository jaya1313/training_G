#include<stdio.h>
int main(){

    // x pattern
    int i,j,k,l;
    int n=5;
    for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
        
            if(i==j || i==n && j==1 || i==1 && j==n || i==2 && j==(n-1) || j==2 && i==(n-1)){
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


   
