//To check whether an alphanumeric character i/p by the users is an alphabet or not by checking its ASCII value//
#include <stdio.h>
#include <conio.h>
 void main()
 {
 char x;
 printf("enter the character\n");
 scanf("%c",&x);
 if((x>=65 && x<=122)||(x<=65 && x>=122))
 printf("It is an alphabet");
 else
 printf("It is not an alphabet");
 getch();
 }
