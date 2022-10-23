#include <stdio.h>
#include <conio.h>
void main()
{
int i,n,isPrime,n1,n2;
printf("Enter the range");
scanf("%d%d",&n1,&n2);
for(n=n1;n<=n2;n++)
{
isPrime=1;

if(n<=1)
{
    isPrime=0;
}
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
isPrime=0;
break;
}
}
if(isPrime)printf("%d\t",n);
}
}
