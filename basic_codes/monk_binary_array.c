#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[N],i,j,k,x=0,y;
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {
        if(a[i]==1)
        x++;
    }
    if(N-x>0)
    y=N-x;
    y=1;
    j=(x+1)*y;
    k=(x-1)*(y+2);
    if(j>=k)
    printf("%d",j);
    else
    printf("%d",k);
    return 0;
}
