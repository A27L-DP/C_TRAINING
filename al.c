#include<stdio.h>
#include<string.h>
void main()
{
    char name[10]="Amrutha";
    char new[100]="hello";
    printf("%c",name[4]);
    printf("length of string is %d\n",strlen(name));
    strcat(new,name);//new=hellow+your name//
    printf("%s",new);
    //searchb for a char in string//
    printf("%zs",strstr(new,"H"));
}