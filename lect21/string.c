#include <stdio.h>
#include <string.h>

int main(){

    //delete an element from a string
    char str[]="hello";
    char str2[50];
    char target='e';
    int j=0;
    int ln= strlen(str);
    printf("%d\n",ln);
    for(int i=0;i<ln;i++){
        if(str[i]!=target){
           str2[j]=str[i];
           j++;
        }
        
    }
   
    printf("%s",str2);
}