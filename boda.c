//sum of digits sod.c 2//
#include<stdio.h>
int sum_digit_recursive(int n)
{
     
    if(n==0)
   return 0;
   int d=n%2;
   return d+sum_digit_recursive(n/2);
  
   
}
void main()
{
    int n;
    printf("enter the valuje of n");
    scanf("%d",&n);
    printf("%d ",sum_digit_recursive(n));
}