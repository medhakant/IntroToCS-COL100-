#include<stdio.h>
int main()
{
int a=0,b=0,c=0,x=0,y=0,z=0,sum;
while (3*a<2000)
   {x=x+(3*a);
    a++;
   }
while (5*b<2000)
   {y=y+(5*b);
    b++;
   }
while (15*c<2000)
   {z=z+(15*c);
    c++;
   }
sum=x+y-z;
printf("%d",sum);
}
