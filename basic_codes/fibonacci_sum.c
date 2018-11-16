#include<stdio.h>
int main() {
int a,x;
long long int sum=1;
printf("How many terms sum  of Fibonacci sequence do you want\n") ;
scanf("%d",&a);
while (a<1)
{
printf("Invalid input,enter again");
scanf("%d",&a);
}
unsigned int arr[a];
arr[0]=0;
arr[1]=1;
for (x=2 ; x < a; x++)
    { arr[x]=arr[x-1]+arr[x-2];
      sum=sum+arr[x];}
printf("the sum is %lld\n",sum);   
    return 0;
}
