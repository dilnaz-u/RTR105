#include<stdio.h>

void main()
 {
 int number1, number2;
 printf("Dear user, please enter number1: ");
 scanf("%d",&number1);
 printf("Dear user, please enter number2: ");
 scanf("%d",&number2);

 if (number1 > number2)
  {
  printf("%d  >  %d\n",number1,number2);
  printf("Prētēji var būt divi gadījumi vai 1. < 2. vai 1. == 2.\n");
  }
 else
  {
  //printf("%d  <  %d\n",number1,number2);
  printf("number1 < number2.\n");
  printf("number1 == number2.\n");
  }
 }
