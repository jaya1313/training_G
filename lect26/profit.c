#include<stdio.h>
int main(){

    // best time to buy and sell stock
    int price[6]={7,1,5,3,6,4};
    int min=price[0];
    int profit;
    int j=0;
    for(int i=0;i<6;i++){
        if(price[i]<min){
            min=price[i];
            j++;
        }
    }
    int max=price[j];
    for(int i=j;i<6;i++){
        if(price[i]>max){
            max=price[i];
        }
    }
    printf("profit = %d",max-min);
}