#include<stdio.h>

    //bubble sort

//     int i,j,temp;
//     int a[6]={1,5,3,2,8,9};
//     int n=6;
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }

//         }
//     }
//     for(i=0;i<n;i++){
//         printf(" %d",a[i]
//     );
// }

//bubbleSort by using function

void bubbleSort(int a[6]){
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
}

int main(){
    int a[6]={5,6,3,1,9,2};
    bubbleSort(a);



}
