#include<stdio.h>
void main()
{
    int age;
    float height;
    printf("please enter your age:");
    scanf("%d",&age);
      printf("please enter your height:");
      scanf("%f",&height);
    if((age>=18)&&(height>=5))
    {
        printf("you are allowed into roller coaster");
    }
    else
    {
        printf("sorry,you are not allowed");
    }
}