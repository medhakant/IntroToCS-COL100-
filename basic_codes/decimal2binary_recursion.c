#include<stdio.h>
int binary(int N)
{
    if(N/2==0)
    {
        printf("%d",N);
        return 0;
    }
    else
    {
        printf("%d",N%2);
        return binary(N/2);
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    binary(N);
}