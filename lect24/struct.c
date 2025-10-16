#include<stdio.h>
#include<string.h>

struct address{
    int pincode;
};

struct student{
    char name[50];
    int rollno;
    int age;
    struct address s2;
};


int main(){

   struct student s1;
   s1.rollno=16;
   s1.age=19;
   printf("%d\n",s1.rollno);
   printf("%d\n",s1.age);
   strcpy(s1.name,"hello");
   printf("%s\n",s1.name);
   s1.s2.pincode=4832001;
   printf("%d",s1.s2.pincode);


}