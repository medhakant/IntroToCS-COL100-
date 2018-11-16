#include<stdio.h>
#include<math.h>
int main()
{
int a;
float c;
printf("Enter the no.");
scanf("%d",&a);
printf("Enter the K for Kth root");
scanf("%f",&c);
int b;
b=pow(a,c);
printf("%d\n",b);
return 0;
}
