//WAP to calculate sum of natural no. upto n(1+2+3+.....n)//
#include <stdio.h>
#include <conio.h>
void main()
{
int n,i,sum;
printf("Enter number:");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("\nsum is %d",sum);
}
