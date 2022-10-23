//To i/p three angles of a triangle & check whether it forms a valid triangle or not//
#include <stdio.h>
#include <conio.h>
 void main()
 {
 int a,b,c;
 printf("Enter the angles of Triangle\n");
 scanf("%d%d%d",&a,&b,&c);
 if (a+b+c==180)
 printf("the triangle is valid");
 else
 printf("the triangle is invalid");
 getch();
 }
