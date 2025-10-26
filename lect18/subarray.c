#include<stdio.h>

// maximum subarray sum of size k
 int main(){
//     int wsum=0;
//     int a[6]={3,4,5,2,1,1};
//     int k=2;
//     for(int i=0;i<k;i++){
//          wsum=wsum+a[i];
// }
// int msum=wsum;
// for(int j=k;j<6;j++){
//     wsum+=a[j]-a[j-k];
//     if(wsum>msum)
//     msum=wsum;
// }
// printf("maximum sum is %d",msum);
// }

// first negative number
int i,j;
int k=2;
int a[6]={4,-1,8,-9,-7,5};
    for(i=0;i<5;i++){
        for(j=i;j<k+i;j++)
        if(a[j]<0){
            printf(" %d",a[j]);
        }

    }
}
