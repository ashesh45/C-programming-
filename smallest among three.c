#include <stdio.h>
int main()
{
int n1,n2,n3;
printf("\nEnter three numbers");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1<n2)
{
if(n1<n3)
{
printf("\n%d is the smallest number.",n1);
}
else
{
printf("\n%d is the smallest number",n3);
}
}
else
{
if(n2<n3)
{
printf("\n%d is the smallest number.",n2);
}
else
{
printf("\n%d is the smallest number",n3);
}
}
return 0;
}
