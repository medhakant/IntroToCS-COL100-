#include<stdio.h>
int main()
{
printf("Enter m,n,k-\n");
int m,n,k;
scanf("%d %d %d",&m,&n,&k);
int a[m][k],b[k][n],i,j,l,c[m][n];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
c[i][j]=0;

printf("Enter matrix A,of %d*%d\n",m,k);
for(i=0;i<m;i++)
{
    for(j=0;j<k;j++)
    scanf("%d",&a[i][j]);
}

printf("Enter matrix B,of %d*%d\n",k,n);
for(i=0;i<k;i++)
{
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
}

for (i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        for(l=0;l<k;l++)
        c[i][j]=c[i][j]+a[i][l]*b[l][j];
       
    }
}
printf("Matrix multiplication product A*B of order %d*%d\n",m,n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    printf("%d ",c[i][j]);
    printf("\n");
}
return 0;
}//successfully Debugged and tested
//#medhakant
