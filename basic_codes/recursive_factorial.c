#include<stdio.h>
double fact(int n)
{
if (n==0)
return 1;
return n*fact(n-1);
}

int main()
{
int n;
printf("Enter a no.\n");
scanf("%d",&n);
printf("%d!=%.0lf\n",n,fact(n));
return 0;
}
