//write a c program which will accept an array arr,its size as n and returns the difference between 1st and last element//
#include<stdio.h>
#include<stdlib.h>
int array(int arr[],int n)
{
    int sub=arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={35,45,65,75,85};
    int n=5;
    printf("%d",array(arr,n));
}