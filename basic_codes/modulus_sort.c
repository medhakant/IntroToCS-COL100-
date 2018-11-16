#include<stdio.h>
int main()
{
    int a[100],i,j,temp,pos,n,min;
    printf("How many numbers need to be sorted?\n");
    scanf("%d",&n);
    printf("Input\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(min>0&&a[j]>0&&min>a[j])
            {
                min=a[j];
                pos=j;
            }  
            if(min>0&&a[j]<0&&min>(a[j]*-1))
            {
                min=a[j];
                pos=j;
            }   
            if(min<0&&a[j]>0&&(min*-1)>a[j])
            {
                min=a[j];
                pos=j;
            }
            if(min<0&&a[j]<0&&min<a[j])
            {
                min=a[j];
                pos=j;
            }    
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
for(i=0;i<n;i++)
printf("%d ,",a[i]);
return 0;
}