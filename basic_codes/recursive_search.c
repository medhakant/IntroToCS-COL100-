#include<stdio.h>
int binary_search (int key, int numbers[], int left, int right)
{
if(key==numbers[left])
return left+1;
if(key==numbers[right])
return right+1;
if (key==numbers[(left+right)/2])
return ((left+right)/2)+1;
if(left-right==-1)
return -1;
if(key>numbers[(left+right)/2])
return binary_search(key,numbers,(left+right)/2,right);
if(key<numbers[(left+right)/2])
return binary_search(key,numbers,left,(left+right)/2);
}
int main()
{
int n;
printf("How many numbers in database.\n");
scanf("%d",&n);
int a[n],i;
printf("Enter the numbers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("%d\n",binary_search(25,a,0,n-1));
return 0;
} 

