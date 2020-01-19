## Laboratory work Nr.1. 
# Taylor series
## Theory
In mathematics, a Taylor series is a representation of a function as an infinite sum of terms that are calculated from the values of the function's derivatives at a single point.
In the West, the subject was formulated by the Scottish mathematician James Gregory and formally introduced by the English mathematician Brook Taylor in 1715. If the Taylor series is centered at zero, then that series is also called a Maclaurin series, after the Scottish mathematician Colin Maclaurin, who made extensive use of this special case of Taylor series in the 18th century.
A function can be approximated by using a finite number of terms of its Taylor series. Taylor's theorem gives quantitative estimates on the error introduced by the use of such an approximation. The polynomial formed by taking some initial terms of the Taylor series is called a Taylor polynomial. The Taylor series of a function is the limit of that function's Taylor polynomials as the degree increases, provided that the limit exists. A function may not be equal to its Taylor series, even if its Taylor series converges at every point. A function that is equal to its Taylor series in an open interval (or a disc in the complex plane) is known as an analytic function in that interval.
**y(x) = exp(-x*x)**
## Code
```
#include<stdio.h>

#include<math.h>

void main(){

float x,y,a,S;

printf("Enter the value of X: ");

scanf("%f", &x);

int k=0;

y=exp(-x*x);

printf("y=exp(-%f*%f)=%f\n",x,x,y);

a = pow(-1,k)*pow(x,2*k)/(1.);

S = a;

printf("%f\t%f\t%f\n",x,a,S);

while(k<100){

k++;

a = a * (-1) *pow (x,2) / (k);

S = S + a;

printf("%f\t%f\t%f\n",x,a,S);

}

printf("       1000\n");

printf("       ----\n");

printf("       \\           k   2*k\n");

printf("        \\     (-1) * x\n");

printf("y(x)  =  |     ----------\n");

printf("        /         k!\n");

printf("       /\n");

printf("       ----\n");

printf("       k=0\n");

printf("                   2\n");

printf("       a * (-1) * x\n");

printf("R  =  --------------\n");

printf("         2*k! \n");

}
```
## Result
```
y=exp(-2.000000*2.000000)=0.018316

2.000000      1.000000      1.000000   

2.000000      -4.000000     -3.000000

2.000000      8.000000      5.000000

2.000000      -10.666667    -5.666667

2.000000      10.666667     5.000000

2.000000      -8.533334     -3.533334

2.000000      5.688889      2.155555

2.000000      -3.250794     -1.095238

2.000000      1.625397      0.530158

2.000000      -0.722399     -0.192240

2.000000      0.288959      0.096719

        1000

        ----
        
        \           k   2*k
        
          \      (-1) * x
 
 y(x)  =  |     ---------       
 
          /         k!
        
        /        
        
        ----
        
        k=0
        
        
                   2     

       a * (-1) * x

R  =  -------------- 

         2*k!
```

## Figure

![fig1](https://user-images.githubusercontent.com/55049044/72689511-e59f1380-3b33-11ea-812c-5bd9a554e0d1.png)


