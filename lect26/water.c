#include<stdio.h>
int main(){
    // water trapped in buildings
    int height[6]={5,6,0,3,5,2};
    int water=0;
    int leftmax[6];
    int rightmax[6];
    leftmax[0]=height[0];
    for(int i=1;i<6;i++){
        if(height[i]>leftmax[i-1]){
            leftmax[i]=height[i];
        }
        else{
            leftmax[i]=leftmax[i-1];
        }
    }
    rightmax[5]=height[5];
    for(int i=4;i>=0;i--){
        if(height[i]>rightmax[i+1]){
            rightmax[i]=height[i];
        }
        else{
            rightmax[i]=rightmax[i+1];
        }
    }
    int minheight;
    for(int i=0;i<6;i++){
        if(leftmax[i]<rightmax[i]){
            minheight=leftmax[i];
        }
        else{
            minheight=rightmax[i];
        }
        water=water+(minheight-height[i]);
    }
    printf("total water stored = %d",water);
}