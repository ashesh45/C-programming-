//To input the rate(float)and quantity(integer)of three different items and displays the total amount(double)after 10% discount//
#include <stdio.h>
#include <conio.h>
 void main()
 {
 float rate1,rate2,rate3;
 int qty1,qty2,qty3;
 float discount=0.1,totalbefdis,totalaftdis;

 printf("Enter the rate and quatity of first item:");
 scanf("%f%d",&rate1,&qty1);
 printf("Enter the rate and quatity of second item:");
 scanf("%f%d",&rate2,&qty2);
 printf("Enter the rate and quatity of third item:");
 scanf("%f%d",&rate3,&qty3);

 totalbefdis=rate1*qty1+rate2*qty2+rate3*qty3;
 totalaftdis=totalbefdis*(0.9);

 printf("\ntotalbefdis:%.2f",totalbefdis);
 printf("\ntotalaftdis:%.2f",totalaftdis);
 getch();
 }



