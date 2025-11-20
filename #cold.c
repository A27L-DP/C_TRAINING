#include<stdio.h>
int myadds(int a ,int b)
{
int sum=a+b;
return sum;
}
void main()
{
int a=70,b=57;
printf("sum%d",myadds(a,b));
int c=76,d=91;
printf("sum%d",myadds(c,d));
}