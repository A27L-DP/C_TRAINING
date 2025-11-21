//write a function which will multiply 3 numbers and call it by reference//
#include<stdio.h>
void prod(int *a,int *b,int *c)
{
    int prod=(*a)*(*b)*(*c);
    printf("%d \n",prod);
}
void main()
{
    int a=98;
    int b=86;
    int c=67;
    printf("call by reference:\n");
    prod(&a,&b,&c);
}