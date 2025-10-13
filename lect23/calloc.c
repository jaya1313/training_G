#include <stdio.h>
#include <stdlib.h>
// free(arr); (bachi hui memory ko delete kr dega)

int main(){

    //calloc (by default values 0 mai store hoti hai,and malloc mai garbage values se hote hai)
    //calloc([ [] [] [] [] ])
    //malloc([1 2 3 4 ])

    int n;
    printf("enter size ");
    scanf("%d",&n);
    int *arr=(int *)calloc(n,sizeof(int));
    printf("enter elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}