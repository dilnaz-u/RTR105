#include<stdio.h>
void main()
 {
 int number;
 printf("Dear user, please enter a number: ");
 scanf("%d",&number);
 //if( (number%2)=0 )//viena vienadības zīme - tā ir piešķiršanas operācija!
 if((number%2)==0)
  printf("%d is a pair number\n",number);
 else
  printf("%d is an odd number \n",number);

 int remainder=number%2;
// if(remainder=0)//vērtības piešķiršanu mainīgajam vienmēr var izpildīt
// tāpēc pēc būtības te ir rakstīts if(1) - un atbilde vienmēr būs "nepāru"
 if(remainder==0)
  printf("%d is a pair number\n",number);
 else
  printf("%d is an odd number\n",number);
 }
