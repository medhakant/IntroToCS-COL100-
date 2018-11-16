#include<stdio.h>
int main()
{
    int a[100],i,j,k,n,sum=0,max=0,pos;
    printf("How many numbers are there to evaluate?\n");
    scanf("%d",&n);
    int f[n];
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
    }//sorting out in ascending *needed for median calculation 
    
for (i=0;i<n;i++)
sum=sum+a[i];//for mean
for (j=0;j<n;j++)
{   f[j]=0;
    for (k=j+1;k<n;k++)
    {
        if(a[j]==a[k])
        f[j]++;
    }
}//sort of frequency distribution table
for (i=0;i<n;i++)
{
if (f[i]>max)
{
     max=f[i];
     pos=i;
}//finding max of frequency table
}
printf("mean=%d\n",sum/n);
if(n%2==1)
{
    printf("median=%d\n",a[n/2]);
}
if(n%2==0)
{
    printf("median=%d\n",(a[n/2]+a[(n/2)+1])/2);
}
printf("mode=%d\n",a[pos]);

return 0;
}//successfully debugged and compiled
//#medhakant