#include<stdio.h>

int main(){
    int lastdig,n,sum=0;
    printf("input any number");
    scanf("%d",&n);
    while(n>0)
    {
      lastdig=n%10;
      sum=sum+lastdig;
      n=n/10;
    }
    printf("sum of digits is %d",sum);
    return 0;
}
   