//write a c program which adds 3 numbers and call it by reference//
#include<stdio.h>
void sum_ref(int*a,int*b,int*c)
{
    int sum=*a+*b+*c;
    printf("%d",sum);
}
void main()
{
    int a=45,b=78,c=98;
    sum_ref(&a,&b,&c);
}