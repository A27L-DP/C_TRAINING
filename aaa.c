#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float));//, for calloc and * malloc//
    p[0]=45;
    p[1]=78;
    p[2]=56;
    p[3]=98;
      printf("%f",p[1]);
   

free(p);
}
