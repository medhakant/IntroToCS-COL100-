#include<stdio.h>
int main()
{
    int a[100],i,j,k,n,x;
    printf("How many numbers need to be sorted and the no. with whom to take moduli?\n");
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (j=0;j<n-1;j++)
    {
        for (k=0;k<n-j-1;k++)
        {
            if (a[k]>a[k+1])
            {
                a[k+1]=a[k]+a[k+1];
                a[k]=a[k+1]-a[k];
                a[k+1]=a[k+1]-a[k];
            }
        }
    }
    for (j=0;j<n-1;j++)
    {
        for (k=0;k<n-j-1;k++)
        {
            if (a[k]%x>a[k+1]%x)
            {
                a[k+1]=a[k]+a[k+1];
                a[k]=a[k+1]-a[k];
                a[k+1]=a[k+1]-a[k];
            }
        }
    }
for (i=0;i<n;i++)
printf("%d %d\n",a[i],a[i]%x);
return 0;
}//complted and debugged