#include<stdio.h>
// binary search using recursion

int binary_search(int a[],int i, int j, int target){
    int mid=(i+j)/2;
    if(i>=j){
        return -1;
    }
    if(a[mid]==target){
        return mid;
    }
    else if(a[mid]<target){
        binary_search(a,mid+1,j,target);
    }
    else{
        binary_search(a,i,mid-1,target);
    }
    
}

int main(){
    int a[5]={1,2,3,4,5};
    int startindex=0;
    int endindex=4;
     int target=4;
    int data=binary_search(a,startindex,endindex,target);
    printf("found at index %d",data);
}