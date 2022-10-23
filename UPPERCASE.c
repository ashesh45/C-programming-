//To convert a character i/p by the users  to UPPERCASE by using the ASCII value//
#include <stdio.h>
#include <conio.h>
 void main()
 {
 char a;
 printf("enter the alphabet");
 scanf("%c",&a);
 if((a<=65 && a>=122)||(a>=65 && a<=122))
 {
  a=a-32;
  printf("Upper case character %c",a);
 }
 else
 {
 printf("Not Uppercase character %c",a);
 }
 getch();
 }




