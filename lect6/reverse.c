#include <stdio.h>

int main(){

    int n,rev=0;
    
    printf("enter any number");
    scanf("%d",&n);
    int ori=n;
    while(n!=0){
        int lastD=n%10;
        rev=rev*10+lastD;
        n=n/10;
    }
    printf("reversed number is %d",rev);
    if(ori==rev){
        printf("\nnumber is palindrome");
    }
    else
     printf("number is not a palindrome");


    return 0;
}