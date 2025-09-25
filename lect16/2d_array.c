#include<stdio.h>
int main(){

//2d array

// int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf(" %d",a[i][j]);
// }
// }

//sum

// int sum=0;
// int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         sum=sum+a[i][j];
// }
// }
// printf(" sum id %d",sum);


//maximum elemnt

// int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int max=a[0][0];
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//      if(a[i][j]>max)
//      max=a[i][j];   
// }
// }
// printf("maximum element is %d",max);


//minimum element

int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int max=a[0][0];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
     if(a[i][j]<max)
     max=a[i][j];   
}
}
printf("minimum element is %d",max);
}