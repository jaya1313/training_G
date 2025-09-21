#include<stdio.h>

int main(){

    int i,j,l,k;
    int s=65;
    //patterns

    //  for(i=0;i<4;i++){
    //      for(j=0;j<=i;j++){
    //          printf("%c",s++);
    //      }
    //      printf("\n");
    //  }


    // up pyramid pattern

    for(i=0;i<4;i++){
         for(j=3;j>i;j--){
             printf(" ");
         }
         for (k=0;k<=i;k++){
             printf("%c",s++);
         }
         for(l=1;l<=i;l++){
            printf("%c",s++);
         }
         printf("\n");
     }
     return 0;
    }

