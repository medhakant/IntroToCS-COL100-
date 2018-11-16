#include<stdio.h>
int main()
{
    int a[10],i,j,k,b[10],c[20];
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for (j=0;j<10-1;j++)
    {
        for (k=0;k<10-j-1;k++)
        {
            if (a[k]>a[k+1])
            {
                a[k+1]=a[k]+a[k+1];
                a[k]=a[k+1]-a[k];
                a[k+1]=a[k+1]-a[k];
            }
        }
    }
    
for(i=0;i<10;i++)
    scanf("%d",&b[i]);
    for (j=0;j<10-1;j++)
    {
        for (k=0;k<10-j-1;k++)
        {
            if (b[k]>b[k+1])
            {
                b[k+1]=b[k]+b[k+1];
                b[k]=b[k+1]-b[k];
                b[k+1]=b[k+1]-b[k];
            }
        }
    }
    i=j=k=0;
    while(i<10&&j<10)
    {
    	if(a[i]>=b[j])
    	{
    		c[k]=b[j];
    		j++; k++;
    		
    	}
    	if(a[i]<b[j])
    	{
    		c[k]=a[i];
    		i++; k++;
    		
    	}}
    	for(i=0;i<20;i++)
    	printf("%d ,",c[i]);
    
    return 0;
}
