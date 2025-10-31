#include<stdio.h>
// check palindrome using recursion

int palindrome(int a[],int i,int j){
  if(i>=j){
    return 1;
  }
  if(a[i]!=a[j]){
    return 0;
  }
  return palindrome(a,i+1,j-1);
}
int main(){
    int a[5]={1,2,3,2,1};
    int i=0;
    int j=4;
    int data=palindrome(a,i,j);
    printf("%d",data);
}