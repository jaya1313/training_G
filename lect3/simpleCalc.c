#include <stdio.h>
#include <conio.h>

int main(){

  float a,b;
  printf("enter 1st number");
  scanf("%f",&a);

  printf("enter 2nd number");
  scanf("%f",&b);

  char op;
  printf("enter an operator to execute(+,-,*,/)");
  op=getche();

  if(op=='+'){
    printf("/nsum =%f",a+b);
  }
  else if(op=='-'){
    printf("/nsubstraction =%f",a-b);
  }
  
  else if(op=='*'){
    printf("/nmultipication =%f",a*b);
  }

  else if(op=='/'){
    if(b!=0){
    printf("/ndivision =%f",a/b);
  }else{
    printf("you cannot divide");
  }
}
  else{
    printf("/ninvalid symbol");
  }
    return 0;
}
