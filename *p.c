//imp//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student *p=&s1;            //direct value access call by value AND BY pointer call by reference//
    strcpy(p->name,"Khushi");
    p->age=4;
    p->marks=98.99;;
    printf("%s \n",p->name);
    printf("%d \n",p->age);
    printf("%f \n",p->marks);

}