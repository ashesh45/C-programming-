#include <stdio.h>
#include <conio.h>
#define M 4
#define N 5
void main()
{
float marks[M][N],stdsum[M],stdavg[M];
float subsum[N],subavg[N];
int i,j;
printf("Enter the marks of %d subjects each for %d students\n",N,M);
for(i=0;i<M;i++)
{
printf("for students no. %d:\n",i);
for(j=0;j<N;j++)
{
printf("for subject no.%d:",j);
scanf("%f",&marks[i][j]);
}
for(i=0;i<M;i++)
{
stdsum[i]=0;
for(j=0;j<N;j++)
{
stdsum[i]+=marks[i][j];
}
stdavg[i]=stdsum[i]/N;
}
for(j=0;j<N;j++)
{
subsum[j]=0;
for(i=0;i<M;i++)
{
subsum[j]+=marks[i][j];
}
subavg[j]=subsum[j]/M;
}
printf("Average of Each student\n");
for(i= 0;i<M;i++)
{
printf("Student no.%d=%.2f",i,stdavg[i]);
}
printf("\nAverage of Each subject\n");
for(j=0;j<N;j++)
{
printf("Subject no.%d=%.2f",j,subavg[j]);
}
}
getch();
}
