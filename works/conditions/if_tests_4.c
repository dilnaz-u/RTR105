#include<stdio.h>
//void main()
int main()
 {
 int number1=1, number2=2;
 //float number1=1, number2=2;

 printf("%d\n",number1=number2);
 //printf("%f\n",number1=number2);
 if((number1=number2) == NULL)
  printf("True\n");
 else
  printf("False\n");

 printf("%d\n",number1=number2);
 //printf("%f\n",number1=number2);
 if(NULL == (number1=number2))
  printf("False\n");
 else
  printf("True\n");

 return 0;
}
