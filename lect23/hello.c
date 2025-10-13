#include <stdio.h>
#include <stdlib.h>
int main(){

    //DMA(dynamic memory allocation)
    // int n;
    // printf("enter size ");
    // scanf("%d",&n);
    // int *arr=(int *)malloc(n*sizeof(int));     //dma
    // printf("enter %d elements",n);
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    //rearranging the array
    int m;
    printf("enter size ");
    scanf("%d",&m);
    int *arr=(int *)malloc(m*sizeof(int)); 
    int arr2[m];    //dma
    printf("enter %d elements",m);
    for(int i=0;i<m;i++){
    scanf("%d\n",&arr[i]);
    }
     int j=0;
     for(int i=0;i<m;i++){
    
        if(arr[i]==0){
            arr2[j]=arr[i];
            j++;
        }
     }
     for(int i=0;i<m;i++){
    
        if(arr[i]<0){
            arr2[j]=arr[i];
             j++;
        }
     }
     for(int i=0;i<m;i++){
    
        if(arr[i]>0){
            arr2[j]=arr[i];
             j++;
        }
     }
     for(int j=0;j<m;j++){
    
        printf("%d",arr2[j]);
     }

}