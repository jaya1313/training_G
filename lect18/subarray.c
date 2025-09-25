#include<stdio.h>

// maximum subarray sum of size k
int main(){
    int wsum=0;
    int a[6]={3,4,5,2,1,1};
    int k=2;
    for(int i=0;i<k;i++){
         wsum=wsum+a[i];
}
int msum=wsum;
for(int j=k;j<6;j++){
    wsum+=a[j]-a[j-k];
    if(wsum>msum)
    msum=wsum;
}
printf("maximum sum is %d",msum);
}

//