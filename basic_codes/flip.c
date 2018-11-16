#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,k;
    char A[100][100];
    for(i=0;i<100;i++)
    {
        scanf("%s",A[i]);
        if(A[i][0]=='\0')
        break;
    }
    printf("%d",i);
    
}