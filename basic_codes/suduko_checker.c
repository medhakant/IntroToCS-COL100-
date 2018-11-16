#include<stdio.h>
int main()
{
    int i,j,k,l,a[4][4],b[4][4],c[4][4];
    printf("This is a 4*4 sudoko solution checker\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        c[i][j]=b[i][j]=a[i][j];
    }
    for(i=0;i<4;i++)
    {
    for (j=0;j<3;j++)
    {
        for (k=0;k<3-j;k++)
        {
            if (a[i][k]>a[i][k+1])
            {
                a[i][k+1]=a[i][k]+a[i][k+1];
                a[i][k]=a[i][k+1]-a[i][k];
                a[i][k+1]=a[i][k+1]-a[i][k];
            }
        }
    }
    }
    for(i=0;i<4;i++)
    {
    for (j=0;j<3;j++)
    {
        for (k=0;k<3-j;k++)
        {
            if (b[k][i]>b[k+1][i])
            {
                b[k+1][i]=b[k][i]+b[k+1][i];
                b[k][i]=b[k+1][i]-b[k][i];
                b[k+1][i]=b[k+1][i]-b[k][i];
            }
        }
    }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }
    
return 0;
}
