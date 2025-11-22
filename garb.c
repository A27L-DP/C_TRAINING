#include<stdio.h>
union data{
int i;
float f;
};
int main()
{
  union data d;
d.i=10;
  printf("d.i=%d\n",d.i);
d.f=3.14;
  printf("d.f=%f\n",d.f);
    printf("d.i=%d\n",d.i);//if you substitute d.i=number o/p will be the number only so only printf//
}
