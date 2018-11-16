#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main(void)
 {
 	int n;
 	printf("How many inputs are there?\n");
 	scanf("%d",&n);
 	int a[n],i,j;
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<i;j++)
 		{
 			if(a[i]==a[j])
 			break;
 		}
 		if(i==j)
 		printf("%d\n",a[i]);
 	}
 	return 0;
 }