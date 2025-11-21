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
    strcpy(s1.name,"joey");
    s1.age=19;
    s1.marks=89.93;

    struct student s2;
     strcpy(s2.name,"chaco");
    s2.age=17;
    s2.marks=97.83;

    struct student s3={"pachoo",18,93.58};
    printf("\n%s",s1.name);         // printf("\n%s%s%s",s1.name,s2.name,s3.name);//
    printf("\n%d",s1.age);
    printf("\n%f",s1.marks);
  
   
}