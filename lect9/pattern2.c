#include<stdio.h>

int main(){

    int i,j,k;
    // int s=1;
    // //patterns

    //  for(i=0;i<4;i++){
    //      for(j=0;j<=i;j++){
    //          printf("%d",s++);
    //      }
    //      printf("\n");
    //  }

     //abc pattern

     
     for(i=0;i<3;i++){
        int s=65;
        for(j=0;j<=i;j++){
    
            printf("%c",s++);
        }
        printf("\n");
     }
    return 0;
}