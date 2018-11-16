#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],i,j,k;
    printf("Enter first string\n");
    scanf("%[^\n]*s",a);
    printf("Enter second string\n");
    scanf("%s",b);
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if(a[i+j]!=b[j])
            break;
        }
        if(j==strlen(b))
        break;
    }
    if(j==strlen(b))
    {
        printf("found\n");
    }
    else
    {
        printf("not found\n");
    }   
return 0;
}