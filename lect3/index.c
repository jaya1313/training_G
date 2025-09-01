#include <stdio.h>

int main(){
int a=5;
int b=3;
//int sum=a++ + ++b +--b +b-- + ++a;
//printf("%d \n",sum);



//if else

/*if(a==5&&b>3){
    printf("hello jaya!");
}
else{
    printf("hii jaya!");
}

int x;
printf("enter a number to check whether even or odd");
scanf("%d",&x);
if(x%2==0){
    printf("%d is even",x);
}
else{
    printf("%d is odd",x);
}*/

//questions

/*int marks;
printf("enter marks to divide grade ");
scanf("%d",&marks);
if(marks>90 && marks<=100){
    printf("A");
}
else if(marks>80 && marks<=90){
    printf("B");
}
else if(marks>70 && marks<=80){
    printf("C");
}
else if(marks>60 && marks<=70){
    printf("D");
}
else if(marks>50 && marks<=60){
    printf("E");
}
else{
    printf("FAIL");
}*/

//larger number
 int x,y;
 printf("enter 1st number ");
 scanf("%d",&x);
 printf("enter 2nd number ");
 scanf("%d",&y);

 if(x>y){
    printf("%d is greater",x);
 }
 else if(x<y){
    printf("%d is greater",y);
 }
 else{
   printf("both are equal");
 }
return 0;
}

