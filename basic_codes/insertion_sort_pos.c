#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],c[N],b[100],i,j;
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<N;i++)
   {
        b[a[i]]=i+1;
        c[i]=a[i];
   }
    for (i=1;i<N;i++)
    {
        j=i;
        while(j>0 && a[j]<a[j-1])
        {
            b[a[j-1]]++;
            b[a[j]]--;
            a[j]=a[j]+a[j-1];
            a[j-1]=a[j]-a[j-1];
            a[j]=a[j]-a[j-1];
            j--;
        }
    }
    for(i=0;i<N;i++)
    printf("%d ",b[c[i]]);
}