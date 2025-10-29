#include<stdio.h>
//find missing no. using xor
int main(){
    int a[4]={1,2,4,5};
    int xor=0;
    int xor2=0;
    for(int i=0;i<=5;i++){
        xor=xor^i;
    }
    for(int i=0;i<4;i++){
        xor2=xor2^a[i];
    }
    printf("missing no. is = %d",xor^xor2);
}