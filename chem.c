#include<stdio.h>
#include<string.h>
void main()
{
    char des[100]="we are super kids";
    char se[100]="good";
    if ((strstr(des,se))!=NULL)
   printf("FOUND");
   else
   printf("not found");
}