#include<stdio.h>
int main(){
    //input[5,4,0,2,0,12]  output [5,4,2,12,0,0]
     int arr[6]={5,4,0,2,0,12};
     int j=0;
     for(int i=0;i<6;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
     }
     for(int i=0;i<6;i++){
        printf("%d\n",arr[i]);
     }
}