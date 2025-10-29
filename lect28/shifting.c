#include<stdio.h>
//left shift(<<) right shift(>>)
int main(){
     int a=5;
     a=a<<1;           // left shift (number gets double)
     printf("%d\n",a);

    //right shift (no. gets half)
    int b=5;
    b=b>>1;
    printf("%d\n",b);

    //2times shifting 

     int c=5;
     c=c<<2;           // left shift (number gets double 2times)
     printf("%d\n",c);

    //right shift (no. gets half 2times)
    int d=5;
    d=d>>2;
    printf("%d",d);


}