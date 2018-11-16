#include <stdio.h>

int main(int argc, char *argv[])
{

    /* Write your code after this line */
     int n,a=0,b=2,c,d;
   scanf("%d",&n);
  while (n<0)
  {printf("Input number is negative, please enter again\n");
   scanf("%d",&n);}
      printf("The first %d prime numbers are:",n);
while (a<=n)
{ c=2;
 d=0;
while (c<=b/2)
{
if (b%c==0)
{d++;}
c++;
}
if (d==0)
{printf("%d ,",b);
a++;}
b++;
}
    
   return 0;
}

