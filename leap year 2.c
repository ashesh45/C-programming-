//To check whether  a year(in A.D) i/p by users is a leap year or not//
#include <stdio.h>
#include <conio.h>
 void main()
 {
 int year;
 printf("Enter the year");
 scanf("%d",&year);
 if(year % 400== 0 && year % 200 ==0 && year % 10==0 && year % 4 ==0)
 {
 printf("It is a leap year");
 }
 else if(year % 100 != 0)
 {
 printf("It is not a leap year");
 }
 else
 {
 printf("It is not a leap year");
 }
 getch();
 }
