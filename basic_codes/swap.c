#include<stdio.h>
int main()
{
int a,b;
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swapped a is=%d\n",a);
printf("Swapped b is=%d\n",b);
return 0;
}

