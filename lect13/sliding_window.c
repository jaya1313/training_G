#include <stdio.h>
int main(){

    //method 2(sliding window) calculating maximum sum in a pair of 3


    // int i;
    //    int a[7]={1,2,3,5,6,5,4};
    //     int k=3;
    //     int n = sizeof(a)/sizeof(a[0]);
    // int windowSum=0;
    // for(i=0;i<k;i++){
    //     windowSum=windowSum+a[i];

    // }
    // int maxSum=windowSum;
    // for(int j=k;j<n;j++){
    //     windowSum=windowSum+a[j]-a[j-k];
    //     if(windowSum>maxSum){
    //         maxSum=windowSum;
    //     }
    // }
    // printf("%d",maxSum);


    //method 1( using 2 loops)

    int b[5]={2,3,-5,6,7};
    int n=5;
    int k=3;
    int maxsum=b[0];
    for(int i=0;i<=n-k;i++){
        int currsum=0;
        for(int j=i;j<i+k;j++){
            currsum=currsum+b[j];
        }
        if(currsum>maxsum){
            maxsum=currsum;
        }
    }
    printf("max sum is %d",maxsum);

    
}
