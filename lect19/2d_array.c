#include<stdio.h>

int main(){

    //change 2d_array into 1d_array
  
    int i,j;
    int a[2][2]={{2,4},{5,6}};
    int b[4];
    int k=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            b[k]=a[i][j];
            k++;
        }
    }
    for(i=0;i<4;i++)
    printf(" %d",b[i]);
}