//To input the start time and stop time(hour,minute,second)of an event and calculate the elapsed time//
#include <stdio.h>
#include <conio.h>
void main()
{

int h1,h2,h3,m1,m2,m3,s1,s2,s3;
int ts1,ts2,ts3;
printf("\n Enter starting hour:");
scanf("%d",&h1);
printf("\n Enter starting minute:");
scanf("%d",&m1);
printf("\n Enter starting second:");
scanf("%d",&s1);
printf("\n Enter starting hour:");
scanf("%d",&h2);
printf("\n Enter starting minute:");
scanf("%d",&m2);
printf("\n Enter starting second:");
scanf("%d",&s2);
ts1=h1*60*60 + m1*60 + s1;
ts2=h2*60*60 + m2*60 + s2;
ts3=ts2-ts1;
h3=ts3/3600;
m3=(ts3-3600*h3)/60;
s3=ts3%60;
printf("\n hour:%d",h3);
printf("\n minute:%d",m3);
printf("\n second:%d",s3);
getch();
}



