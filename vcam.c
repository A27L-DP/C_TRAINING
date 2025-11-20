//write a c function which will accepts one input parameter r and returns the perimeter of the circle , declare pi as const//
#include<stdio.h>
float perimeter(int r)
{
    const float pi=3.14;
    float peri=2*pi*r;
     return peri;
}
void main()
{
    
int r;
    printf("enter the value of r");
    scanf("%d",&r);
    printf("perimeter:%f",perimeter(r));
}