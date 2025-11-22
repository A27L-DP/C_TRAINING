//create a union in c with 2 variables integer money and another float variable tax take money from the user and assign it to the money variable in the union take the tax from the user assign it to the the tax variable in the union over write the money variable inside the union with money-tax//
#include<stdio.h>
union data{
int money;
float tax;
};
void main()
{
union data u;
  int m;
printf("enter money:");
scanf("%d",&m);//entered money will be for both u.money as well as m//
  u.money=m;
  printf("%d\n",u.money);
float t;
printf("enter tax");
scanf("%f",&t);
  u.tax=t;
  printf("%f\n",u.tax);
  u.money=m-t;
  printf("%d\n",u.money);
}

