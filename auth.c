#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book
{
  char name[100];
  char author[100];
  int year;
};
void main()
{
    int n;
    printf("enter the number of books");
    scanf("%d",&n);
    struct Book b[n];
    for (int i = 0;i <n; i++)
    {
      printf("enter the name of the book \n");
      scanf("%s",b[i].name);
      printf("enter the name of the author \n");
      scanf("%s",b[i].author);
      printf("enter the year of publication \n");
      scanf("%d",&b[i].year);
    }
    printf("your information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",b[i].name);
         printf("%s \n",b[i].author);
          printf("%d \n",b[i].year);
    }
}