//POINTER WILL SAVE THE MEMORY ADDRESS OF THE VARIABLE//
#include<stdio.h>
void main()
{
    int a=98;
    int *p=&a;
    printf("a value is%d\n",a);
    printf("a address is%p\n",p);
    printf("p points to%d",*p);
}