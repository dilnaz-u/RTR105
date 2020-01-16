#include<stdio.h>
#include<math.h>
void main(){
 float a,b,x,delta_x=1.e-2;
 printf("Enter value of a: ");
 scanf("%f",&a);
 printf("Enter value of b: ");
 scanf("%f",&b);
 printf("\tx\t\texp(-x*x)\t\texp\'(-x*x)\t\texp\''(-x*x)\n");
 x = a;
 while(x<b){
 printf("%10.2f\t%10.2f\t%10.2f\%10.2f\n",x,exp(-x*x),(exp(-(x+delta_x)*(x+delta_x))-exp(-x*x))/delta_x,(exp(-(x+2*delta_x)*(x+2*delta_x))-2*exp(-(x+delta_x)*(x+delta_x))+exp(-x*x))/(delta_x*delta_x)); 
  x += delta_x;
  }
}
