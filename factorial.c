//To input the factorial of a given number//
#include <stdio.h>
#include <conio.h>
void main()
{
int n,i,prod;
printf("Enter number:");
scanf("%d",&n);
prod=1;
for(i=1;i<=n;i++)
{
prod*=i;
}
printf("Factorial of %d is %d",n,prod);
}
