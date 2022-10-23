#include <stdio.h>
#include <conio.h>
#define N 6
void main()
{
float A[N]={89,0,-32,-99,183,5};
int i,l,s;
l=0;
s=0;
for(i=1;i<=N;i++)
{
if(A[i]>A[l])l=i;
if(A[i]<A[s])s=i;
}
printf("largest Element is at index %d which is %f",l,A[l]);
printf("smallest Element is at index %d which is %f",s,A[s]);
getch();
}
