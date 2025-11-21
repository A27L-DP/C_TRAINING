//create a structure  with 3 variables  name of the car ,maximum speed, price store these in array of stuctures and display them//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car//every element of an array has a structure//
{
    char name[100];
    float max_speed;
    float price;
    
};
void main()
{
    int n;
    printf("enter number of cars:");
    scanf("%d",&n);
    struct car c[n];
    {
        for (int i = 0; i <n; i++)
        {
            printf("enter the name of the car");
            scanf("%s",c[i].name);
            printf("enter the maximum speed of the car");
            scanf("%f",&c[i].max_speed);
            printf("enter the price of the car");
            scanf("%f",&c[i].price);
        }
        printf("your information");
        for (int i = 0; i <n; i++)
        {
         printf("%s\n",c[i].name);
         printf("%f\n",c[i].max_speed);
         printf("%f\n",c[i].price);
        }
        
        
    };
    
}

