#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    printf("Enter x and y centralisation\n");
    scanf("%d %d",&x,&y);
    while ((x<1)||(x>80)||(y<1)||(y>24))
    {
    printf("Invalid input , enter again\n");
    scanf("%d %d",&x,&y);
    }
    printf("Enter length and width\n");
    scanf("%d %d",&c,&d);
    while ((c<1)||(c>(2*x))||(d<1)||(d>(2*y)))
    {
    printf("Invalid input , enter again\n");
    scanf("%d %d",&c,&d);
    }
    for (a=(1-y-d/2);a<=(y+d/2);a++)
    {
        for (b=(1-x-c/2);b<=(x+c/2);b++)
        {
        if (((b==c)||(b==1)||(a==1)||(a==d))&&(a>=1)&&(b>=1)&&(a<=d)&&(b<=c))
        printf("*");
        else     
        printf(" ");
        }
        printf("\n");
    }
    return 0;
}
