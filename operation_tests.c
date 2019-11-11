#include<stdio.h>
#define A 7;
void main(){
 int a=7, b=2;

printf("%d + %d = %d (sizeof \"a+b\" %lu byte(s))\n",a,b,a+b,sizeof(a+b));
printf("%d - %d = %d (sizeof \"a-b\" %lu byte(s))\n",a,b,a-b,sizeof(a-b));
printf("%d * %d = %d (sizeof \"a*b\" %lu byte(s))\n",a,b,a*b,sizeof(a*b));
printf("%d / %d = %d (sizeof \"a/b\" %lu byte(s))\n",a,b,a/b,sizeof(a/b));

printf("%d / %d = %.1f (result of using (float)(a/b) even with f format)\n",a,b,(float)(a/b));
printf("%d / %d = %.1f (result of using (float)a/b)\n",a,b,(float)a/b);
printf("%d %c %d = %d (sizeof \"a%cb\" %lu byte(s))\n",a,'%',b,a%b,'%',sizeof(a%b));

printf("%d++ = %d (sizeof \"a++\" %lu byte(s))\n",a,a++,sizeof(a++));
printf("value of a after - %d\n",a);
printf("++%d = %d (sizeof \"++a\" %lu byte(s))\n",a,++a,sizeof(++a));
printf("value of a after - %d\n",a);

printf("%d-- = %d (sizeof \"a--\" %lu byte(s))\n",a,a--,sizeof(a--));
printf("value of a after - %d\n",a);
printf("-%d = %d (sizeof \"--a\" %lu byte(s))\n",a,--a,sizeof(--a));
printf("value of a after - %d\n",a);


printf("%d == %d = %d (sizeof \"a==b\" %lu byte(s))\n",a,b,a==b,sizeof(a==b));
printf("%d != %d = %d (sizeof \"a!=b\" %lu byte(s))\n",a,b,a!=b,sizeof(a!=b));
printf("%d >= %d = %d (sizeof \"a>=b\" %lu byte(s))\n",a,b,a>=b,sizeof(a>=b));
a=A;
printf("%d <= %d = %d (sizeof \"a<=b\" %lu byte(s))\n",a,b,a<=b,sizeof(a<=b));
printf("%d > %d = %d (sizeof \"a>b\" %lu byte(s))\n",a,b,a>b,sizeof(a>b));
printf("%d < %d = %d (sizeof \"a<b\" %lu byte(s))\n",a,b,a<b,sizeof(a<b));


printf("%d & %d = %d (sizeof \"a&b\" %lu byte(s))\n",a,b,a&b,sizeof(a&b));
printf("%d ^ %d = %d (sizeof \"a^b\" %lu byte(s))\n",a,b,a^b,sizeof(a^b));
printf("%d << %d = %d (sizeof \"a<<b\" %lu byte(s))\n",a,b,a<<b,sizeof(a<<b));
printf("%d >> %d = %d (sizeof \"a>>b\" %lu byte(s))\n",a,b,a>>b,sizeof(a>>b));
printf("%d | %d = %d (sizeof \"a|b\" %lu byte(s))\n",a,b,a|b,sizeof(a|b));
printf("~%d = %d (sizeof \"~a\" %lu byte(s))\n",a,~a,sizeof(~a));

printf("%d && %d = %d (sizeof \"a&&b\" %lu byte(s))\n",a,b,a&&b,sizeof(a&&b));
printf("%d || %d = %d (sizeof \"a||b\" %lu byte(s))\n",a,b,a||b,sizeof(a||b));
printf("!(%d||%d) = %d (sizeof \"!(a||b)\" %lu byte(s))\n",a,b,!(a||b),sizeof(!(a||b)));
a=A;
printf("%d += %d = %d (sizeof \"a+=b\" %lu byte(s))\n",a,b,a+=b,sizeof(a+=b));
a=A;
printf("%d -= %d = %d (sizeof \"a-=b\" %lu byte(s))\n",a,b,a-=b,sizeof(a-=b));
a=A;
printf("%d *= %d = %d (sizeof \"a*=b\" %lu byte(s))\n",a,b,a-=b,sizeof(a-=b));
a=A;
printf("%d /= %d = %d (sizeof \"a/=b\" %lu byte(s))\n",a,b,a/=b,sizeof(a/=b));



}
