#include<stdio.h>
int main()
{
    int a[100],i,j,k,n;
    printf("How many numbers need to be sorted?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (j=0;j<n-1;j++)
    {
        for (k=0;k<n-1;k++)
        {
            if (a[k]>a[k+1])
            {
                a[k+1]=a[k]+a[k+1];
                a[k]=a[k+1]-a[k];
                a[k+1]=a[k+1]-a[k];
            }
        }
    }
for (i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}