## Laboratory work Nr.2.
# Bisection method
## Theory
In mathematics, the bisection method is a root-finding method that applies to any continuous functions for which one knows two values with opposite signs. The method consists of repeatedly bisecting the interval defined by these values and then selecting the subinterval in which the function changes sign, and therefore must contain a root. It is a very simple and robust method, but it is also relatively slow. Because of this, it is often used to obtain a rough approximation to a solution which is then used as a starting point for more rapidly converging methods.The method is also called the interval halving method, the binary search method, or the dichotomy method.

For polynomials, more elaborated methods exist for testing the existence of a root in an interval (Descartes' rule of signs, Sturm's theorem, Budan's theorem). They allow extending bisection method into efficient algorithms for finding all real roots of a polynomial; see Real-root isolation.

f(x) = 0∧sgn(f(x+δx)) ̸= sgn(f(x−δx)) => f(x+δx)·f(x−δx) < 0

## Code
```
#include<stdio.h>
#include<math.h>
int main(){
float a, b, c, x, delta_x=1.e-5, funkca, funkcb,funckc;
int k=0;
printf("Enter value of a: ");
scanf("%f", &a);
printf("Enter value of b: ");
scanf("%f", &b);
printf("Enter value of c: ");
scanf("%f", &c);

funkca = exp(-a*a)-c; funkcb = exp(-b*b)-c;
if(funkca*funkcb>0){
printf("In the range [%.2f;%.2f] exp(-x*x) for the function ",a,b);
printf("There are no roots\n");
return 1;}

printf("exp(-%7.3f*%7.3f)-%7.3f=%7.3f\n",a,a,c,exp(-a*a)-c);
printf("exp(-%7.3f*%7.3f)-%7.3f=%7.3f\n",b,b,c,exp(-b*b)-c);

while((b-a)>delta_x){
k++;
x = (a+b)/2.;
if(funkca*(exp(-x*x)-c)>0)
 a = x;
 else
  b = x;
printf("%2d. repeat: exp(-%7.3f*%7.3f)-%7.3f=%7.3f\t",k,a,a,c,exp(-a*a)-c);
printf("exp(-%7.3f*%7.3f)-%7.3f=%7.3f\t",x,x,c,exp(-x*x)-c);
printf("exp(-%7.3f*%7.3f)-%7.3f=%7.3f\n",b,b,c,exp(-b*b)-c);
}
printf("The boot located at x=%.3f because exp(-x*x)-c is %.3f\n",x,exp(-a*a)-c);
return 0;
}
```

## Result
```
Enter value of a: -0.5                                                             
Enter value of b: 1                                                                
Enter value of c: 0.5                                                              
exp(- -0.500* -0.500)-  0.500=  0.279                                              
exp(-  1.000*  1.000)-  0.500= -0.132                                              
 1. repeat: exp(-  0.250*  0.250)-  0.500=  0.439       exp(-  0.250*  0.250)-  0  
.500=  0.439    exp(-  1.000*  1.000)-  0.500= -0.132                              
 2. repeat: exp(-  0.625*  0.625)-  0.500=  0.177       exp(-  0.625*  0.625)-  0  
.500=  0.177    exp(-  1.000*  1.000)-  0.500= -0.132                              
 3. repeat: exp(-  0.812*  0.812)-  0.500=  0.017       exp(-  0.812*  0.812)-  0  
.500=  0.017    exp(-  1.000*  1.000)-  0.500= -0.132                              
 4. repeat: exp(-  0.812*  0.812)-  0.500=  0.017       exp(-  0.906*  0.906)-  0  
.500= -0.060    exp(-  0.906*  0.906)-  0.500= -0.060                              
 5. repeat: exp(-  0.812*  0.812)-  0.500=  0.017       exp(-  0.859*  0.859)-  0  
.500= -0.022    exp(-  0.859*  0.859)-  0.500= -0.022                              
 6. repeat: exp(-  0.812*  0.812)-  0.500=  0.017       exp(-  0.836*  0.836)-  0  
.500= -0.003    exp(-  0.836*  0.836)-  0.500= -0.003                              
 7. repeat: exp(-  0.824*  0.824)-  0.500=  0.007       exp(-  0.824*  0.824)-  0  
.500=  0.007    exp(-  0.836*  0.836)-  0.500= -0.003                              
 8. repeat: exp(-  0.830*  0.830)-  0.500=  0.002       exp(-  0.830*  0.830)-  0  
.500=  0.002    exp(-  0.836*  0.836)-  0.500= -0.003                              
 9. repeat: exp(-  0.830*  0.830)-  0.500=  0.002       exp(-  0.833*  0.833)-  0  
.500= -0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
10. repeat: exp(-  0.832*  0.832)-  0.500=  0.001       exp(-  0.832*  0.832)-  0  
.500=  0.001    exp(-  0.833*  0.833)-  0.500= -0.000                              
11. repeat: exp(-  0.832*  0.832)-  0.500=  0.000       exp(-  0.832*  0.832)-  0  
.500=  0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
12. repeat: exp(-  0.832*  0.832)-  0.500=  0.000       exp(-  0.833*  0.833)-  0  
.500= -0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
13. repeat: exp(-  0.832*  0.832)-  0.500=  0.000       exp(-  0.832*  0.832)-  0  
.500=  0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
14. repeat: exp(-  0.833*  0.833)-  0.500=  0.000       exp(-  0.833*  0.833)-  0 
.500=  0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
15. repeat: exp(-  0.833*  0.833)-  0.500=  0.000       exp(-  0.833*  0.833)-  0  
.500= -0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
16. repeat: exp(-  0.833*  0.833)-  0.500=  0.000       exp(-  0.833*  0.833)-  0  
.500= -0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
17. repeat: exp(-  0.833*  0.833)-  0.500=  0.000       exp(-  0.833*  0.833)-  0  
.500= -0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
18. repeat: exp(-  0.833*  0.833)-  0.500=  0.000       exp(-  0.833*  0.833)-  0  
.500= -0.000    exp(-  0.833*  0.833)-  0.500= -0.000                              
The boot located at x=0.833 because exp(-x*x)-c is 0.000  

Enter value of a: 0.5                                                                                                                        
Enter value of b: -0.3                                                                                                                       
Enter value of c: 0                                                                                                                          
In the range [0.50;-0.30] exp(-x*x) for the function There are no roots  
```

## Figure

![Снимок](https://user-images.githubusercontent.com/55049044/72691535-f8234800-3b47-11ea-8769-2a5f609f8c8f.PNG)




  
  
  
  
  
  
