#include<stdio.h>
int main()
{
    double x,i,j,a,b,c;
    scanf("%lf",&x);
    a=0;
    c=x;
    for(i=0;i<1000000;i++)
    {
     b=(a+c)/2;
     if(b*b<x)
     a=(a+c)/2;
     else
     c=(a+c)/2;
    }
printf("%.10lf\n",b);
}
