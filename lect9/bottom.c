#include<stdio.h>

int main(){

    //bottom pyramid pattern

    int i,j,k,l;
    int s=90;

    // for(i=0;i<4;i++){
    //      for(j=0;j<=i;j++){
    //          printf(" ");
    //      }
    //      for (k=3;k>i;k--){
    //          printf("*");
    //      }
    //      for(l=3;l>i-1;l--){
    //         printf("*");
    //      }
    //      printf("\n");
    //  }

    // bottom abc pattern
     for(i=0;i<4;i++){
         for(j=0;j<=i;j++){
             printf(" ");
         }
         for (k=3;k>i;k--){
             printf("%c",s--);
         }
         for(l=3;l>i-1;l--){
            printf("%c",s--);
         }
         printf("\n");
     }
    return 0;
}

