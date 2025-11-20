//write a function which will accepts two input parameters x,y and returns x^2+y^2//
#include<stdio.h>
int form(int x,int y)
{
    int sum=x*x +y*y;
 return sum;    
}
void main()
{
    int x=8,y=16;
    printf("\n%d",form(x,y));
    int a=2,b=6;
    printf("\n%d",form(a,b));
}
