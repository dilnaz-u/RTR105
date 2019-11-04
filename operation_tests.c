#include<stdio.h>

void main(){
 int a=7, b=2;

printf("%d + %d = %d (sizeof \"+\" %d byte(s))\n",a,b,a+b,sizeof(a+b));
printf("%d - %d = %d (sizeof \"-\" %d byte(s))\n",a,b,a-b,sizeof(a-b));
printf("%d * %d = %d (sizeof \"*\" %d byte(s))\n",a,b,a*b,sizeof(a*b));
printf("%d / %d = %d (sizeof \"/\" %d byte(s))\n",a,b,a+b,sizeof(a/b));


