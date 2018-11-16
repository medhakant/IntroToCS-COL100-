#include<stdio.h>
int main()
{
    int a,b,n=1,count;
    while (count!=2)
    {a=1;
     b=1;
     count=0;
     while ((a*a*a)<=n)
     {
     b=a;
     while ((a*a*a)+(b*b*b)<=n)
     {
         if ((a*a*a)+(b*b*b)==n)
         {count=count+1;}
         b=b+1;   
    }
    a=a+1;
    }
    n=n+1;
    }
printf("taxi no. is%d\n",n-1);
}