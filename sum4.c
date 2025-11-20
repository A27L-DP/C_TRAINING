//important//
#include<stdio.h>
void fub(int n)
{
    int a=0;
    int b=1;
    int sum;
    for (int i = 0; i <n; i++)
    {
        printf("%d",a);
        sum=a+b;
        a=b;//a swapped with b//
        b=sum;
    }


}


    void main()
    {
     int n;
    printf("enter the value of n");
     scanf("%d",&n);
    fub(n);
    }
