#include <stdio.h>
#include <conio.h>
void main()
{
int n,number=1,sum=0,i=0;
float avg;
printf("Enter any numbers to be entered");
scanf("%d",&n);
printf("Enter the number");
do{
scanf("%d",&number);
sum=sum+number;
i++;
}while(i<n);
avg=sum/n;
printf("\n sum=%d",sum);
printf("\n average=%0.2f",avg);
}
