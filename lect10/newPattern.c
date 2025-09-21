#include<stdio.h>
int main(){

    // butterfly pattern

    int i,j,k,l;
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        for(k=3;k>i;k--){
            printf(" ");
        }
        for(k=3;k>i;k--){
            printf(" ");
        }
        for(l=0;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }

    for(i=0;i<4;i++){
        for(j=3;j>i;j--){
            printf("*");
        }
        for(k=0;k<=i;k++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf(" ");
        }
        for(l=3;l>i;l--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}