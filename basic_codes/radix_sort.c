#include<stdio.h>

void countsort(int A[],int n,int place)
{
        int i,freq[10]={0};         //range for integers is 10 as digits range from 0-9
        int output[n];
        for(i=0;i<n;i++)//frequency of each digit in place
                freq[(A[i]/place)%10]++;  
        for(i=1;i<10;i++)
                freq[i]+=freq[i-1];//cummulative frequency
        for(i=0;i<n;i++)
        {
                output[freq[(A[i]/place)%10]-1]=A[i];//output[c.f-1]=A[i]
                freq[(A[i]/place)%10]--;
        }
        for(i=0;i<n;i++)
                A[i]=output[i];//rearrange the array
}
void radixsort(int A[],int n,int maxx)            //maxx is the maximum element in the array
{
        int mul=1,i;
        while(maxx)
        {
                countsort(A,n,mul);
                mul*=10;
                maxx/=10;
        }
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N],i,max;
    for(i=0;i<N;i++)
    scanf("%d",&A[i]);
    max=A[0];
    for(i=0;i<N;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    radixsort(A,N,max);
    for(i=0;i<N;i++)
    printf("%d ",A[i]);
}
//successfully debugged and tested
//Medha Kant