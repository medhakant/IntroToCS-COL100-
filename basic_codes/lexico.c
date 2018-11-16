#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
char A[5][30],*temp;
int i,j,k,l,n;
printf("How many words need to be arranged?\n");
scanf("%d",&n);
printf("Enter %d words\n",n);
for (i=0;i<n;i++)
scanf("%s",A[i]);
temp = (char*)malloc(30);
for (j=0;j<n-1;j++)
{
    for (k=0;k<n-j-1;k++)
    {
        for (l=0;l<30;l++)
        {
        if (A[k][l]<A[k+1][l])
        break;
        if (A[k][l]>A[k+1][l])
        {
            strcpy(temp,A[k]);
            strcpy(A[k],A[k+1]);
            strcpy(A[k+1],temp);
            break;  
        }
        }
    }
}
printf("Words in lexicographic order are-\n");
for(i=0;i<n;i++)
printf("%s\n",A[i]);
return 0;
}//successufully compiled ,debugged and tested
//#medha kant
