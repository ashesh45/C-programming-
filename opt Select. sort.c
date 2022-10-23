#include <stdio.h>
#include <conio.h>
#define N 6
void main()
{
float A[N]={89,0,-32,-99,183,5},temp;
int i,j,s;
for(i=0;i<N-1;i++)
{
s=i;
for(j=i+1;j<N;j++)
{
if(A[j]<A[s])s=j;
}
temp=A[s];
A[s]=A[i];
A[i]=temp;
}
printf("Values in Ascending order\n");
for(i=0;i<N;i++)
{
printf("\n%f",A[i]);
}
getch();
}
