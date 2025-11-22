#include<stdio.h>
struct student
{
    char name[100];
    float marks;
};
void main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        printf("enter name");
        scanf("%s",s[i].name);
        printf("enter marks");
        scanf("%f",&s[i].marks);
    } 
    float temp=0;
    for(int j=0;j<5;j++)
    {
      for(int k=0;k<j+1;k++)
      {
          while(s[j]<s[k])
          {
              temp=s[j];
              s[j]=s[k];
              s[k]=temp;
          }
      }
    }
    printf("highest marks:",s[0].marks);
    
    
    
}
