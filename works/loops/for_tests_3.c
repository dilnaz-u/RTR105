#include<stdio.h>
void main()
 {
 int number1, number2, yes_no, i;

 for (  yes_no=1, i=0 ; yes_no && (i<5) ; i++)
  {
  printf("Dear user, please enter number1: ");
  scanf("%d",&number1);
  printf("Cienījamais lietotāj, lūdzu, ievadi 2. skaitli: ");
  scanf("%d",&number2);

  if (number1 > number2)
   printf("Tavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n",number1,number2);
  //break;
  if (i!=4)
   {
   printf("Cienījamais lietotāj, vai gribi turpināt (šī bija %d. reize)?",i+1);
   printf(" (jā - jebkurš skaitlis, izņemot 0)\n");
   scanf("%d",&yes_no);
   }
  else
   printf("Paldies par uzmanību, tas ir arī viss.\n");
  }

 printf("Šis teksts parādīsies jebkurā gadījumā\n");
 }
