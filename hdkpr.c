
#include<stdio.h>
void main()
{
    int arr[4]={60,48,91,49};
    int*p=&arr;
    printf("%d\n",*p);
     printf("%d\n",*(p+1));
}
   
