#include<stdio.h>
//bit manupulation 
//find unique element in array using XOR(^)
int main(){
    int a[5]={2,6,5,2,6};
    int xor=0;
    for(int i=0;i<5;i++){
        xor=xor^a[i];
        }
        printf("%d",xor);
    }
