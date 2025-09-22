#include<stdio.h>

int Bsearch(int a[6]){
    int s=0;
    int end =5;
    int t=7;
    while(s<=end){
        int mid=(s+end)/2;
        if(a[mid]==t){
            return mid;
        }
        else if(t<a[mid]){
            end=mid-1;
        }
        else
        s=mid+1;
 }
 return -1;


}

int main(){

    int a[6]={2,3,4,5,6,7};
    int d=Bsearch(a);
    printf("number found at index %d",d);
}