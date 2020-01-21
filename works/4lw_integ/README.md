## Laboratory work Nr.4.
# Numerical integration
## Theory

In analysis, numerical integration comprises a broad family of algorithms for calculating the numerical value of a definite integral, and by extension, the term is also sometimes used to describe the numerical solution of differential equations. 

The basic problem in numerical integration is to compute an approximate solution to a definite integral

![Снимок0](https://user-images.githubusercontent.com/55049044/72823330-5c075700-3c95-11ea-9359-7df22a8e9f84.PNG)

to a given degree of accuracy. If f(x) is a smooth function integrated over a small number of dimensions, and the domain of integration is bounded, there are many methods for approximating the integral to the desired precision.

**Quadrature rules based on interpolating functions**

A large class of quadrature rules can be derived by constructing interpolating functions that are easy to integrate. Typically these interpolating functions are polynomials. In practice, since polynomials of very high degree tend to oscillate wildly, only polynomials of low degree are used, typically linear and quadratic.

The simplest method of this type is to let the interpolating function be a constant function (a polynomial of degree zero) that passes through the point

![1](https://user-images.githubusercontent.com/55049044/72823492-9ec92f00-3c95-11ea-854e-9795976d2283.PNG)

This is called the midpoint rule or **rectangle rule**

![2](https://user-images.githubusercontent.com/55049044/72823553-b7394980-3c95-11ea-84a4-377b4476da24.PNG)

![Integration_rectangle svg](https://user-images.githubusercontent.com/55049044/72823586-c4563880-3c95-11ea-9580-bf94476fb588.png)

The interpolating function may be a straight line (an affine function, i.e. a polynomial of degree 1) passing through the points

![8](https://user-images.githubusercontent.com/55049044/72824893-e2249d00-3c97-11ea-9920-79b06f013f83.PNG)

This is called the **trapezoidal rule**

![7](https://user-images.githubusercontent.com/55049044/72825189-69721080-3c98-11ea-9301-072b5d770a20.PNG)

![11](https://user-images.githubusercontent.com/55049044/72825265-8e668380-3c98-11ea-8454-14bc47e7a0f1.PNG)

![Integration_trapezoid svg](https://user-images.githubusercontent.com/55049044/72825333-a8a06180-3c98-11ea-936a-c6aa1c759c94.png)


## Code

**Rectangle rule**
```#include<stdio.h>
#include<math.h>

int main(){
float a,b,eps,h,integr1=0.,integr2;
printf("Enter value of a: ");
scanf("%f", &a);
printf("Enter value of b: ");
scanf("%f", &b);
printf("Enter value of eps: ");
scanf("%f", &eps);
int k,n=2;

integr2=(b-a)*(exp(-a*a)+exp(-b*b))/n;
while(fabs(integr2-integr1)>eps){
n*=2;
h=(b-a)/n;
integr1=integr2;
integr2=0.;
for(k=0;k<n;k++)
   integr2+=h*exp(-(a+(k+0.5)*h)*(a+(k+0.5)*h));
}
printf("The value of the integral (sum of area of %d rectangles): %.2f\n", n,integr2);
}
```

**Trapezoiddal rule**
```
#include<stdio.h>
#include<math.h>

int main(){
float a,b,eps,h,integr1=0.,integr2;
printf("Enter value of a: ");
scanf("%f", &a);
printf("Enter value of b: ");
scanf("%f", &b);
printf("Enter value of eps: ");
scanf("%f", &eps);
int k,n=1;

integr2=(b-a)*(exp(-a*a)+exp(-b*b))/n;
while(fabs(integr2-integr1)>eps){
n*=2;
h=(b-a)/n;
integr1=integr2;
integr2=0.;
for(k=1;k<=(n-1);k++)
   integr2+=exp(-(a+k*h)*(a+k*h));//integr2=integr2+exp(-(a+k*h)*(a+k*h));
integr2 = h*(integr2 + exp(-a*a)/2+exp(-b*b)/2);
}
printf("The value of the integral (sum of area of %d trapezoid): %.2f\n", n,integr2);
}
```

## Result

**Rectangle rule**
```
Enter value of a: 0.4                                                                                                                           
Enter value of b: 5                                                                                                                             
Enter value of eps: 0.0001                                                                                                                      
The value of the integral (sum of area of 256 rectangles): 0.51 
```

**Trapezoiddal rule**
```
Enter value of a: 0.4                                                                                                                           
Enter value of b: 5                                                                                                                             
Enter value of eps: 0.0001                                                                                                                      
The value of the integral (sum of area of 256 trapezoid): 0.51
```

## Figure

![12](https://user-images.githubusercontent.com/55049044/72825977-d1752680-3c99-11ea-9b77-19b362e21de7.PNG)

![13](https://user-images.githubusercontent.com/55049044/72826006-dcc85200-3c99-11ea-822d-64e476e62449.PNG)













