#include<stdio.h>
int main()
{
    int a[100],i,j,k,n;
    printf("How many numbers do you wish to sort?\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (j=1;j<n;j++)
    {
        k=j;
        while(k>0 && a[k]<a[k-1])
        {
            a[k]=a[k]+a[k-1];
            a[k-1]=a[k]-a[k-1];
            a[k]=a[k]-a[k-1];
            k--;
        }
    }
for (i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}