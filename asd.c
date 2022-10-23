#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float x,sum,term,fact;
int n,i,j;
printf("Enter x:");
scanf("%f",&x);
printf("Enter n:");
scanf("%d",&n);
sum=0;
for(i=0;i<n;i++)
{
fact=1;
for(j=1;j<=2*1;j++)
{
fact*=j;
}
term=pow(-1.0,i)*pow(x,2*i)/fact;
sum+=term;
printf("\n%f",term);
}
printf("\ncosx=%f",sum);
getch();
}
