#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float x,sum,term,fact;
int n,i,j;
printf("Enter the no. of data:");
scanf("%d",&n);
printf("Enter the value of x:");
scanf("%f",&x);
sum=1;
for(i=1;i<n;i++)
{
fact=1;
for(j=1;j<=i;j++)
{
fact*=j;
}
term=pow(x,i)/fact;
printf("\n(x^%d)/%f=%f",i,fact,term);
sum+=term;
}
printf("\n\nsum is %f",sum);
getch();
}
