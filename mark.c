
#include<stdio.h>
void exam(int m1,int m2,int m3)
{
    if(m1>=40,m2>=40,m3>=40)
    {
        printf("Congrats you are passed in exam");
    }
    else
{
        printf("Sorry you are failed");
}
       float avg=(float)(m1+m2+m3)/3;
       printf("average marks:%f",avg); 
}
void main()
{
    int m1,m2,m3;
  
    printf("enter 3 subjects marks m1,m2,m3:");
    scanf("%d%d%d",&m1,&m2,&m3);
    exam(m1,m2,m3);
 
}