#include<stdio.h>
 int fact(int a)
{
int x=1;
while (a>=1)
{x=x*a;
a--;}
return x;
}
int main()
{ printf("%d",fact(5));}
