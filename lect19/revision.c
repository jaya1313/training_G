#include <stdio.h>
int main(){

    // sliding window (size 3)
    int i,wsum=0;
    int a[8]={1,3,7,-8,-1,8,5,-3};
    int k=3;
    for(i=0;i<k;i++){
        wsum=wsum+a[i];
    }

    int maxsum=wsum;
    for(int j=k;j<8;j++){
        wsum=wsum+a[j]-a[j-k];
        if(wsum>maxsum){
            maxsum=wsum;
        }
    }
  printf("maximum sum=%d",maxsum);
}