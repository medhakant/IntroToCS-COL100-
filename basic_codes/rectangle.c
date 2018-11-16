#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter rows and columns");
    scanf("%d %d",&c,&d);
    for (a=1;a<=d;a++)
    {
        for (b=1;b<=c;b++)
        printf("*");
        printf("\n");
    }
    return 0;
}