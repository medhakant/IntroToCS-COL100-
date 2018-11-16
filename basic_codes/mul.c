#include<stdio.h>
int main()
{
int n=0,sum=0;
while(n<2000)
{if ((n%15)==0)
 {sum=sum+n;
n++;}
else
{ sum=sum+0;
n++;}
}
printf("%d",sum);
return 0;}
