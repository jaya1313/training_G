#include <stdio.h>
#include <stdlib.h>
int main(){

    //realloc
     int n;
     printf("enter size ");
     scanf("%d",&n);
     int *arr=(int *)malloc(n*sizeof(int));
     int newsize;
     printf("\nenter new size");
     scanf("%d",&newsize);
     arr=(int *)realloc(arr,newsize*sizeof(int));
     printf("enter new elements");
     for(int i=0;i<newsize;i++){
        scanf("%d",&arr[i]);
     }

     for(int i=0;i<newsize;i++){
        printf("%d",arr[i]);
     }


}