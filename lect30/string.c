#include<stdio.h>
// check string is palindrome using recursion

int  palindrome(char str[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(str[i]!=str[j]){
        return 0;
    }
    return palindrome(str,i+1,j-1);
}
int main(){
    char str[10]="mom";
    int i=0;
    int j=2;
    int data=palindrome(str,i,j);
    printf("%d",data);
}