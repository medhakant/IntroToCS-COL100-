#include<stdio.h>

int main()
{  int n,i;
   printf("How many fibonacci numbers need to be stored?\n");
   scanf("%d",&n);
   int A[n];
   int arr[n];
   arr[0]=0;
   arr[1]=1;
   for (int x=2 ; x < n ; x++ )
    {
     arr[x]=arr[x-1]+arr[x-2];
     
    }
for(i=0;i<n;i++)
printf("%d,",arr[i]);
printf("\n");
return 0;
}//successfully completed and compiled
//#medhakant
