//To input the sum upto 5(1+2+3+4+5)//
#include <stdio.h>
#include <conio.h>
void main()
{
int v,n=10,sum=0;
v=1;
while(v<=5)
{
    sum=sum+v;
    v++;
}
printf("%d",sum);
}

