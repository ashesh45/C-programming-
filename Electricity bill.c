#include <stdio.h>
#include <conio.h>
void main()
{
float Cu,Pu,u,bill=0;
printf("\n Enter previous and current unit of consumption:");
scanf("%f%f",&Pu,&Cu);
u=Cu-Pu;
if (u<0)
printf("error");
else if(u<=20)
bill=u*4;
else if(u<=50)
bill=(20*4)+(u-20)*7.3;
else if(u<=150)
bill=(20*4)+(30*7.3)+(u-50)*8.8;
else if(u<=250)
bill=(20*4)+(30*7.3)+(100*8.8)+(u-150)*9.5;
else if(u>250)
bill=(20*4)+(30*7.3)+(100*8.8)+(100*9.5)+(u-250)*11.5;
printf("%.2f",bill);
getch();
}
