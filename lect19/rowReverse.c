#include<stdio.h>

int main(){

    //row wise reverse
  
    int i,j;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",a[i][j]);
           }
           printf("\n");
    }
     printf("\n");

    for(i=0;i<3;i++){
        for(j=2;j>=0;j--){
            printf(" %d",a[i][j]);
           }
           printf("\n");
    }
}


    //column reverse

//     int i,j;
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf(" %d",a[i][j]);
//            }
//            printf("\n");
//     }
//      printf("\n");

//     for(i=2;i>=0;i--){
//         for(j=0;j<3;j++){
//             printf(" %d",a[i][j]);
//            }
//            printf("\n");
//     }

   
// }
