#include <stdio.h>
int counting_sort(int A[],int aux[],int sortedA[],int N,int max)
{
    int i,temp,j=0;
	for(i=0;i<max+1;i++)
	aux[i]=0;
	for(i=0;i<N;i++)
	aux[A[i]]++;
	for(i=0;i<max+1;i++)
	{
		temp=aux[i];
		while(temp--)
		{
			sortedA[j]=i;
            j++;
		}
	}
}

 int main(void)
 {
 	int N,max=0;
 	scanf("%d",&N);
 	int A[N],i,sortedA[N];
 	for(i=0;i<N;i++)
 	scanf("%d",&A[i]);
 	for(i=0;i<N;i++)
 	{
 		if(A[i]>max)
 		max=A[i];
 	}
 	int aux[max+1];
 	counting_sort(A,aux,sortedA,N,max);
 	for(i=0;i<N;i++)
 	printf("%d ",sortedA[i]);
 	return 0;
 }//successfully deubugged and tested
//Medha Kant