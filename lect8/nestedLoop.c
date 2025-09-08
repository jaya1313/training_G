#include<stdio.h>

void main(){
    int i,k,j;
    
    //square pattern

     for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        printf("*");
     }  
       printf("\n");
     }

    //upper left tringle

     for(i=0;i<3;i++){
       for(j=0;j<=i;j++){
          printf("*");
       }  
        printf("\n");
    }

    // lower left triangle

    
    
     for(i=0;i<3;i++){
       for(j=3;j>i;j--){
          printf("*");
       }  
        printf("\n");
      }

    // upper right triangle

      for(i=0;i<3;i++){
        for(j=3;j>i;j--){
           printf(" ");
        }
         for(k=0;k<=i;k++){
             printf("*");
       }
        printf("\n");
      }  

    // lower  right triangle

    for(i=0;i<3;i++){
        for(j=0;j<=i;j++){
           printf(" ");
        }
           for(k=3;k>i;k--){
             printf("*");
        }
        printf("\n");
       }  


        
     }



