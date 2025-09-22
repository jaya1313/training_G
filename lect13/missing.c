#include<stdio.h>
int main(){

    //mising number

    // int i,m,orgSum,sum=0;
    // int a[5]={1,2,3,5,6};
    // orgSum=21;
    // for(i=0;i<5;i++){
    //     sum=sum+a[i];
    // }
    // m=orgSum-sum;
    // printf("missing number is %d",m);

    //palindrome

    //  int i,count=0;
    //  int b[7]={1,2,3,4,3,2,1};
    //  int n=7;
    //  for(i=0;i<n/2;i++){
    //      if(b[i]==b[n-i-1]){
    //         count++;
    //      }
    //  }
    
    // if(count==n/2){
    //      printf("array is palindrome");
    //  }
    //  else
    //  printf("not palindrome");

    //count the digit

    int c[6]={1,2,3,1,2,1};
    int count=0;
    int target=1;
    for(int i=0;i<6;i++){
            if(c[i]==target){
                count++;
            }
        }
    
    printf("%d occurs %d times",target,count);
}

    
