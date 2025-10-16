#include<stdio.h>
#include<string.h>
int main(){
    int height[9]={1,8,6,2,5,4,8,3,7};
    int i=0;
    int j=8;
    int h;
    int maxArea=0;
    while(i<j){
        if(height[i]<height[j]){
            int h=height[i];
        }
        else{
         h=height[j];
        }
        int w=j-i;
        int area=h*w;
        if(area>maxArea){
            maxArea=area;
        }
     
    }
    printf("maximum area is %d",maxArea);
}