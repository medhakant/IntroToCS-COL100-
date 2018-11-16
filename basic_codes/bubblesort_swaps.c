#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,j,count=0;
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j+1]<a[j])
        {
            a[j]=a[j]+a[j+1];
            a[j+1]=a[j]-a[j+1];
            a[j]=a[j]-a[j+1];
            count++;
        }
        }
    }
printf("%d",count);
return 0;
}