#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 10
void main()
{
float A[N][N],B[N][N],C[N][N];
int i,j,m,n,p,k,q;
do{
printf("Enter the order of first matrix:");
scanf("%d%d",&m,&n);

printf("Enter the order of Second matrix:");
scanf("%d%d",&p,&q);
}while (n!=p);

printf("Enter the values of first matrix[%d*%d]:\n",m,n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%f", &A[i][j]);
}
printf("Enter values of Second matrix[%d*%d]:\n",n,q);
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
scanf("%f",&B[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
C[i][j]=0;
for(k=0;k<n;k++)
{
C[i][j]+=A[i][k]*B[k][j];
}
}
}
printf("Result of matrix multiplication:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%10.4f",C[i][j]);
}
printf("\n");
}
getch();
}
