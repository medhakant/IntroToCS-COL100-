#include<stdio.h>
int main()
{
int t=8,n,x=1,r[8];
printf("Enter the no.");
scanf("%d",&n);
if (n>0 && n<256)
{
   for (x;x<=8;x++)
   {
   r[x]=n%2;
   n=n/2;
   }
   while (t>0)
   {printf("%d ",r[t]);
    t--;
   }
//printf("%d %d %d %d %d %d %d %d",r[8],r[7],r[6],r[5],r[4],r[3],r[2],r[1]);
}
else
{printf("It is not in range");}



return 0;}
