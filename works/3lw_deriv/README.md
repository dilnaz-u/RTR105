## Laboratory work Nr.3.
# Numerical differentiation
## Theory
In numerical analysis, numerical differentiation describes algorithms for estimating the derivative of a mathematical function or function subroutine using values of the function and perhaps other knowledge about the function.

A finite difference is a mathematical expression of the form f (x + b) − f (x + a). If a finite difference is divided by b − a, one gets a difference quotient. The approximation of derivatives by finite differences plays a central role in finite difference methods for the numerical solution of differential equations, especially boundary value problems.

Certain recurrence relations can be written as difference equations by replacing iteration notation with finite differences.

A forward difference is an expression of the form

![Снимок2](https://user-images.githubusercontent.com/55049044/72692054-9c5abe00-3b4b-11ea-8f5b-b28cf7fa7294.PNG)

The derivative of a function f at a point x is defined by the limit.

![Снимок3](https://user-images.githubusercontent.com/55049044/72692121-05dacc80-3b4c-11ea-8646-5743519d3e78.PNG)

![Снимок4](https://user-images.githubusercontent.com/55049044/72692149-24d95e80-3b4c-11ea-8a10-116cd518f323.PNG)

## Code
```
#include<stdio.h>
#include<math.h>
int main(){
 float a,b,x,delta_x=1.e-2;
 printf("Enter value of a: ");
 scanf("%f",&a);
 printf("Enter value of b: ");
 scanf("%f",&b);
 printf("\tx\t\texp(-x*x)\t\texp\'(-x*x)\t\texp\''(-x*x)\t\texp\'(-x*x)\t\texp\''(-x*x)\n");
 x = a;
 while(x<b){
 printf("%10.2f\t%10.2f\t%10.2f\%10.2f\%10.2f\%10.2f\n",x,exp(-x*x),(exp(-(x+delta_x)*(x+delta_x))-exp(-x*x))/delta_x,(exp(-(x+2*delta_x)*(x+2*delta_x))-2*exp(-(x+delta_x)*(x+delta_x))+exp(-x*x))/(delta_x*delta_x),-2*x*exp(-x*x),2*(2*(x*x)-1)*exp(-x*x)); 
  x += delta_x;
  }
}
```

## Result
```
Enter value of a: 0.5                                                                                                                        
Enter value of b: 1                                                                                                                          
        x            exp(-x*x)     exp'(-x*x)   exp''(-x*x)  exp'(-x*x)  exp''(-x*x)                                                                                                          
      0.50            0.78           -0.78        -0.74       -0.78       -0.78                                                                     
      0.51            0.77           -0.79        -0.70       -0.79       -0.74                                                                     
      0.52            0.76           -0.80        -0.66       -0.79       -0.70                                                                     
      0.53            0.76           -0.80        -0.62       -0.80       -0.66                                                                     
      0.54            0.75           -0.81        -0.58       -0.81       -0.62                                                                     
      0.55            0.74           -0.82        -0.54       -0.81       -0.58                                                                     
      0.56            0.73           -0.82        -0.51       -0.82       -0.54                                                                     
      0.57            0.72           -0.83        -0.47       -0.82       -0.51                                                                     
      0.58            0.71           -0.83        -0.43       -0.83       -0.47                                                                     
      0.59            0.71           -0.84        -0.39       -0.83       -0.43                                                                     
      0.60            0.70           -0.84        -0.35       -0.84       -0.39                                                                     
      0.61            0.69           -0.84        -0.32       -0.84       -0.35                                                                     
      0.62            0.68           -0.85        -0.28       -0.84       -0.31                                                                     
      0.63            0.67           -0.85        -0.24       -0.85       -0.28                                                                     
      0.64            0.66           -0.85        -0.20       -0.85       -0.24                                                                     
      0.65            0.66           -0.85        -0.17       -0.85       -0.20                                                                     
      0.66            0.65           -0.85        -0.13       -0.85       -0.17                                                                     
      0.67            0.64           -0.86        -0.09       -0.86       -0.13                                                                     
      0.68            0.63           -0.86        -0.06       -0.86       -0.09                                                                     
      0.69            0.62           -0.86        -0.02       -0.86       -0.06                                                                     
      0.70            0.61           -0.86        0.01        -0.86       -0.02                                                                     
      0.71            0.60           -0.86        0.04        -0.86       0.01                                                                     
      0.72            0.60           -0.86        0.08        -0.86       0.04                                                                     
      0.73            0.59           -0.86        0.11        -0.86       0.08                                                                     
      0.74            0.58           -0.86        0.14        -0.86       0.11                                                                     
      0.75            0.57           -0.85        0.17        -0.85       0.14                                                                     
      0.76            0.56           -0.85        0.21        -0.85       0.17   
      0.77            0.55           -0.85        0.24        -0.85       0.21                                                                     
      0.78            0.54           -0.85        0.27        -0.85       0.24                                                                     
      0.79            0.54           -0.85        0.30        -0.85       0.27                                                                     
      0.80            0.53           -0.84        0.32        -0.84       0.30                                                                     
      0.81            0.52           -0.84        0.35        -0.84       0.32                                                                     
      0.82            0.51           -0.84        0.38        -0.84       0.35                                                                     
      0.83            0.50           -0.83        0.41        -0.83       0.38                                                                     
      0.84            0.49           -0.83        0.43        -0.83       0.41           
      0.85            0.49           -0.82        0.46        -0.83       0.43                                                                     
      0.86            0.48           -0.82        0.48        -0.82       0.46                                                                     
      0.87            0.47           -0.81        0.51        -0.82       0.48                                                                     
      0.88            0.46           -0.81        0.53        -0.81       0.51                                                                     
      0.89            0.45           -0.80        0.55        -0.81       0.53                                                                     
      0.90            0.44           -0.80        0.57        -0.80       0.55                                                                     
      0.91            0.44           -0.79        0.59        -0.80       0.57                                                                     
      0.92            0.43           -0.79        0.61        -0.79       0.59                                                                     
      0.93            0.42           -0.78        0.63        -0.78       0.61                                                                     
      0.94            0.41           -0.77        0.65        -0.78       0.63                                                                     
      0.95            0.41           -0.77        0.67        -0.77       0.65                                                                     
      0.96            0.40           -0.76        0.69        -0.76       0.67                                                                     
      0.97            0.39           -0.75        0.70        -0.76       0.69                                                                     
      0.98            0.38           -0.75        0.72        -0.75       0.70                                                                     
      0.99            0.38           -0.74        0.74        -0.74       0.72                                                                     
      1.00            0.37           -0.73        0.75        -0.74       0.74 
 ```
 
 ## Figure
 
 ![Снимок9](https://user-images.githubusercontent.com/55049044/72692497-18560580-3b4e-11ea-9864-771ad7d468ed.PNG)
                                                                           



























