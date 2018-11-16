#include<stdio.h>
struct point 
{
    int x;
    int y;
};
struct screen
{
    struct point pt1;
    struct point pt2;
};
int main()
{
    struct screen rect;
    scanf("%d %d",&rect.pt1.x,&rect.pt1.y);
    scanf("%d %d",&rect.pt2.x,&rect.pt2.y);
    printf("%d %d\n",rect.pt1.x,rect.pt1.y);
    printf("%d %d\n",rect.pt2.x,rect.pt2.y);

}