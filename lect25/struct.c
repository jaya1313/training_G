#include<stdio.h>
struct student{
    char name;
    int rollno;
    int marks;
};
int main(){
    struct student s1;
    strcpy(s1.name,"hello");
}
