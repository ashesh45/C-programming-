#include <stdio.h>
#include <conio.h>
void main()
{
float score;char grade;
printf("Enter the score");
scanf("%f", &score);

if (score >100)
printf("grade=X");

else if(score>=80 && score<=100)
printf("grade=A");

else if(score>=60 && score<=80)
printf("grade=B");

else if(score>=40 && score<=60)
printf("grade=C");

else if(score>=0 && score<=40)
printf("grade=D");

else
printf("grade='x'");
getch();
}

