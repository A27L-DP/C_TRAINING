#include<stdio.h>
struct score 
{
    float marks;
    int rank;
};
void edit(struct score *s1)
{
    printf("before changing in functioin %f\n",s1->marks);
    s1->marks=46.8;
    printf("after changing in function %f\n",s1->marks);
}
void main()
{
    struct score s1={48,91};
    edit(&s1);
    printf("after changing in main function %f\n",s1.marks);
}


