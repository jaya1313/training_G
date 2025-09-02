#include<stdio.h>

int main(){
    int choice;
    int balance=100000,amount;
    printf("1-Balance Check 2-Withdraw 3-Deposit 4-Exit");
    printf("\nenter your choice");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1:
       printf("your balance is %d",balance);
       break;

       case 2:
       printf("enter amount to withdraw");
       scanf("%d",&amount);
       if(amount<=balance){
       balance=balance-amount;
       printf("withdraw sucessfully!,your balance=%d",balance);
       break;
       }
       else{
        printf("insufficient balance");
        break;
       }

       case 3:
       printf("enter amount to deposit");
       scanf("%d",&amount);
       balance=balance+amount;
       printf("Deposit sucessfully!,your balance=%d",balance);
       break;

       case 4:
       printf("Thankyou");
       break;
    }
    return 0;
}