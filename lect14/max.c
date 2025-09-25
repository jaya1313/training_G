#include <stdio.h>
#include <limits.h>

int main(){
//     int a[6]={1,8,6,5,-3,1};
//     int maxSum=a[0];

//     for(int i=0;i<6;i++){
//         int currSum=0;
//         for(int j=i;j<6;j++){
//             currSum=currSum+a[j];
//             if(currSum>maxSum){
//         maxSum=currSum;
//     }
//     }
    
// }
//     printf("maximum sum is %d",maxSum);


// if all values are negative then
//maxSum=INT_MIN
int a[6]={-1,-8,-6,-5,-3,-1};
    int maxSum= INT_MIN;

    for(int i=0;i<6;i++){
        int currSum=0;
        for(int j=i;j<6;j++){
            currSum=currSum+a[j];
            if(currSum>maxSum){
        maxSum=currSum;
    }
    }
    
}
    printf("maximum sum is %d",maxSum);




}
   