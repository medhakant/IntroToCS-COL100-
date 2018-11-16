#include<stdio.h>
 #include <math.h>
  /*Program to calculate value of pi using ramanujan's formula*/
     /*Medha Kant*/
    double fact(int x) /*function to calculate factorial*/
     { double factorial = 1.0;
        int i ;
        for(i= 1; i <=x; ++i)
        {
           factorial *= (double)i;
       }
        return factorial;/*the function passes the factorial to the main function*/
    }
   
    
    
    int main()
    { 
        int n=30;
    double a=0,b;
    int l;
    for(l=0;l<=n;l++) /*loop to sum the terms of the series*/
        { 
        a=a+((fact(4*l)*(26390*l+1103))/(pow(fact(l),4)*pow(396,4*l))); }
        
        b=(9801/(pow(8,.5)*a));/*putting the values in the final equation*/
        printf("%.55lf\n",b);
        return 0;
        }
