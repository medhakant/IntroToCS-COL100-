#include<stdio.h>
int main()
{
    int N,T,j;
    scanf("%d",&T);
    for(j=0;j<T;j++)
{
    scanf("%d",&N);
    int A[N],i,count=0;
    for(i=0;i<N;i++)
    scanf("%d",&A[i]);
    int c=2,d=0;
    for(i=0;i<N;i++)
    {
        c=1;
        d=0;
        while (c<=A[i])
        {
        if (A[i]%c==0)
        d++;
        c++;
        }
        if (d==2)
        count++;
    }
    printf("%d ",count);
}
}