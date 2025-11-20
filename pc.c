//write a c function which will accept 3 parameters l,b,h and returns volume of the cube//
#include<stdio.h>
int volume(int l,int b,int h)
{
    int vol=l*b*h;
    return vol;
}
void main()
{
    int l=5,b=6,h=9;
    printf("volume is:%d",volume(l,b,h));
    int a=7,c=9,d=3;
    printf("volume is:%d",volume(a,c,d));
}