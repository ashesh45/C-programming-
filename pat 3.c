#include <stdio.h>
#include <conio.h>
void main()
{
int i,j;
printf("Numeric pattern \n\n");
for(i=1;i<=5;i++)
{
for(j=i;j>=1;j--)
{
printf("%d ",j);
}
printf("\n");
}
}
