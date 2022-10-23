//To input the TSA and volume of a cylindrical objects given its radius and height(to be input by users during runtime)//
#include<stdio.h>
#include<conio.h>
#define pi 3.14159265
 void main()
  {
 float radius,height,tsa,vol;
printf("enter the radius and height\n");
 scanf("%f%f",&radius,&height);
 vol=pi*radius*radius*height;
 tsa=2*pi*radius*(radius+height);

 printf("\n volume=%0.2f",vol);
printf("\n\n Total surface area=%0.2f",tsa);
getch();
 }
