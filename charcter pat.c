#include <stdio.h>
#include <conio.h>
void main()
{
char name[10]="CARIBBEAN";
int i,count,j;
count=0;
while(name[count++]!='\0');
for(i=0;i<count;i++)
{
printf("\n");
for(j=0;j<=i;j++)
printf("%c ",name[j]);
}
}
