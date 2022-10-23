#include <stdio.h>
#include <conio.h>
void main()
{
int days,months,years,ndays;
printf("Enter the days:");
scanf("%d",&days);
years=days/365;
ndays=days%365;
months=ndays/30;
days=ndays%30;
printf("\n %d years, %d months, %d days",years,months,days);
return 0;
}
