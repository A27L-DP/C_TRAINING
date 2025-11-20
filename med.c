#include <stdio.h>
 main()
{
    char name;
    int Bloodpressure,Glyceamicindex;
    printf("\nenter your name");
    scanf("%d",&name);
    printf("\nread the below given parameters and enter your details to get your health score card");
printf("\nenter your Bloodpressure:%d");
scanf("%d",&Bloodpressure); 
if(Bloodpressure >120/80)
{
printf("Hypertension");
}
else if(Bloodpressure =120/80)
{
    printf("normal congrats");
}else if (Bloodpressure<120/80){
    printf("low BP");
}
printf("\nenter your Glyceamicindex:%d");
scanf("%d",&Glyceamicindex);
if (Glyceamicindex<50)
{
    printf("Low blood sugar");/* code */
}else if(Glyceamicindex<=60)
{
    printf ("normal blood sugar");
}else if(Glyceamicindex>=70)
{
    printf("Diabetic");
}
if()
}