#include<stdio.h>

int main(){

    int i,j,k;

    //patterns

    // for(i=0;i<3;i++){
    //     for(j=0;j<=i;j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }


    //  for(i=0;i<3;i++){
    //     for(j=3;j>i;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    // 
    // for(i=0;i<3;i++){
    //     for(j=3;j>i;j--){
    //         printf(" ");
    //     }
    //     for(k=0;k<=i;k++){
    //          printf("%d",k);
    //     }
    //     printf("\n");
    // }

    for(i=0;i<3;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=3;k>i;k--){
             printf("%d",k);
        }
        printf("\n");
    }
}