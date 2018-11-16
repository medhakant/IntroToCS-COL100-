#include<stdio.h>
int main()
{
    int a=1,b=1,c,d;
    printf("Enter rows and columns\n");
    scanf("%d %d",&c,&d);
    for (a=1;a<=d;a++)
    {
        for (b=1;b<=c;b++)
        {
        if ((b<c)&&(b>1)&&(a!=1)&&(a!=d))
        printf(" ");
        else     
        printf("*");
        }
        printf("\n");
    }
    return 0;
}