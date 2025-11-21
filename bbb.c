#include<stdio.h>
#include<stdlib.h>
void main()
{
    int*p=(int*)malloc(4*sizeof(int));
   p[0]=78;
   p[1]=89;
   p[2]=67;
   p[3]=56;
   printf("%d",p[1]);
   

free(p);
}