// strings

#include<stdio.h>
#include <string.h>
int main(){

    // char name[]="helloo";
    // printf("name is %c\n",name[0]);
    // printf("name is %c\n",name[1]);
    // printf("name is %c\n",name[2]);
    // printf("name is %c\n",name[3]);
    // printf("name is %c\n",name[4]);
    // printf("name is %c\n",name[5]);


    //palindrome

    // char name[] = "madam"; 
    // int ln=   strlen(name);
    // printf("%d\n",ln);
    // int iscount=1;
    // for(int i=0;i<ln/2;i++){
    //     if(name[i]!=name[ln-i-1]){
    //         iscount=0;
    //     }
    //     }
    //     if(iscount==1){
    //         printf("string is palindrome");
    //     }
    //     else
    //      printf("string is not palindrome");

    //input from scanf and gets

    // char str[100];
    // printf("enter any string");
    // scanf("%s",str);
    // printf("%s",str);

    //whole line input

    char str[100];
    printf("enter any string");
    gets(str);
    printf("%s",str);

    

    return 0;
}