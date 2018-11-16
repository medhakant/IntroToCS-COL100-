#include<stdio.h>
int main()
{
    float a,b;
    int x,y,r;
    printf("Enter centralisation x,y\n");
    scanf("%d %d",&x,&y);
    while (x<1||x>80||y<1||y>24)
    {
    printf("Invalid input,Enter centralisation again x,y\n");
    scanf("%d %d",&x,&y);
    }
    printf("Enter radius\n");
    scanf("%d",&r);
    while (r>x||r>y||r<1)
    {
    printf("Invalid input,Enter radius again\n");
    scanf("%d",&r);
    }
    for (a=-x;a<=2*x;a++)
    {
        for (b=-y;b<=2*y;b++)
        {
            if (a*a+b*b==r*r)
            printf("*");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
