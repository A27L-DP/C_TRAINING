
//search for an element in an array//
#include<stdio.h>
int search (int arr[],int key,int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int key;
    int arr[7]={34,68,92,45,35};
    int n=7;
    printf("enter the value of key");
    scanf("%d",&key);
    printf("%d",search(arr,key,n));
}