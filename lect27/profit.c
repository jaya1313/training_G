#include<stdio.h>
int main(){
    // find maximum profit
    int a[6]={7,1,5,3,6,4};
    int i,j;
    int minbuy=a[0];
    int maxp=0;
    for(i=0;i<6;i++){
        if(a[i]<minbuy){
            minbuy=a[i];
        }
        else{
            int profit=a[i]-minbuy;
            if(profit>maxp){
                maxp=profit;
            }
        }
    }
    printf("maximum profit = %d ",maxp);
}