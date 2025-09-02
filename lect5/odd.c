#include<stdio.h>

int main(){
   int i;
   printf("even numbers\n");
   for(i=1;i<=10;i++){
    if(i%2==0)
    printf("%d\n",i);
    
   }
   printf("odd numbers\n");
   for(i=0;i<10;i++){
    if(i%2!=0)
    printf("%d\n",i);
    
   }

   //sum
   // int i,sum=0;
    //for(i=1;i<=10;i++){
      //  sum=sum+i;
    //}
    //printf("sum is %d",sum);
     return 0;
}