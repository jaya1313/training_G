#include <stdio.h>
#include <string.h>

int main(){

    //storing a string into another string
//    char s[]="ohh";
//    char data[10];
//    for(int j=0;s[j]!='\0';j++)
//    {
//    data[j]=s[j];
//    }
//    printf("%s",data);

    //string ques

    //linear search
    char str[]="hello";
    char target='l';
    for(int i=0;str[i]!='\0';i++){

        if(str[i]==target){
            printf("element found at index %d\n",i);
           // break;
        }
    }
       return 0;
}