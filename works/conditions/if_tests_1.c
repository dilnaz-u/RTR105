#include<stdio.h>

void main()
 {
 int number1, number2;
 printf("Dear user, please enter number1: ");
 scanf("%d",&number1);
 printf("Dear user, please enter number2: ");
 scanf("%d",&number2);

 if (number1 > number2)
  printf("%d  >  %d\n",number1,number2);
 printf("Šis teksts parādīsies jebkurā gadījumā\n");

 if (number1 > number2)
  {
  printf("%d  >  %d\n",number1,number2); 
  printf("Bet šis teksts jau neparādīsies jebkurā gadījumā\n");
  }
 }
