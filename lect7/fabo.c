//fabonacii using for

#include<stdio.h>
int main(){
    //int i,n,nxt,t1=0,t2=1;
    //printf("enter any number");
    //scanf("%d",&n);
    //for(i=0;i<n;i++){
      //   printf(" %d",t1);
        //nxt=t1+t2;
        //t1=t2;
        //t2=nxt;
    //}

    //fabonacii using while
    int i,n,nxt,t1=0,t2=1;
    printf("enter any number");
    scanf("%d",&n);
    i=0;
    while(i<n){
        printf(" %d",t1);
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
        i++;
    }
    return 0;
}