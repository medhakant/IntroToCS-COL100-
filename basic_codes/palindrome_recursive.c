#include<stdio.h>
#include<string.h>
char palindrome(char A[],int start,int end)
{
    if(end<=start)
    return 1;
    if(end>start)
    {
        if(A[end]==A[start])
        return palindrome(A,start+1,end-1);
        else
        return 0;
    }
}
int main()
{
    printf("\nenter any no. to check if its's a palindrome\n");
    char A[100];
    int end,i;
    scanf("%s",A);
    end=strlen(A)-1;
    if(palindrome(A,0,end)==1)
    printf("is a palindrome\n");
    if(palindrome(A,0,end)==0)
    printf("not a palindrome\n");
}