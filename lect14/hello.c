#include <stdio.h>

int main(){

    //shift array by one position ,20 30 40 50 10
    int i,b;
    int a[5]={10,20,30,40,50};
    int first=a[0];
    int n=5;
    for(i=0;i<n;i++){
     a[i]=a[i+1];
    }
    a[n-1]=first;
    for(int j=0;j<5;j++){
    printf(" %d",a[j]);


}
}