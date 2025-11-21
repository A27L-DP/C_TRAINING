#include<stdio.h>
void names(char first[],char last[],char sw)
{
    int i=0;
    char full[100];
    while(first[i]!='\0')//adding first//
    {
        full[i]=first[i];
        i++;
    }
    full[i]= ' '; //adding space//
    i++;
    int j=0;
    while(last[j]!='\0')
    {
        full[i]=last[j];
        i++;
        j++;
    }
    full[i]=' ';
    printf("%s",full);
    int len=i+1;
    if(len<sw)
    printf("fits the screen");
    else
    printf("does not fit in the screen");
}
void main()
{
    char sw=12;
    char first[100]="Raj";
    char last[100]="Kumar";
    names(first,last,sw);
}
