#include<stdio.h>
#include<math.h>
void main(){
 float a,b,x,i,delta_x=1.e-2;
 printf("Enter value of a: ");
 scanf("%f",&a);
 printf("Enter value of b: ");
 scanf("%f",&b);
 printf("\tx\t\texp(-x*x)\t\texp\'(-x*x)\t\texp\''(-x*x)\n");
 x = a;
 while(x<b){
  x[i]=x;
  x=x+delta_x;}
}
