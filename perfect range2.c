#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
int i,n,perfect,num,n1,n2,sum=0;
printf("Enter the range");
scanf("%d%d",&n1,&n2);
sum=0;
for(n=n1;n<=n2;n++)
{
sum=0;
for(i=1;i<=n/2;i++)
{
if(n%i==0)
    sum+=i;
}
if(n==sum)
{
    printf("\n%d: ",n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            printf("%d ", i);
    }


}
}
}
