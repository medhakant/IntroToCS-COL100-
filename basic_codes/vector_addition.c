#include<stdio.h>
struct point
{
    int x;
    int y;
};
struct point add(struct point *p1,struct point *p2)
{
    (*p1).x+=(*p2).x;
    (*p1).y+=(*p2).y;
    return (*p1);
}
int main()
{
    struct point pt1;
    struct point pt2;
    struct point temp;
    scanf("%d %d",&pt1.x,&pt1.y);
    scanf("%d %d",&pt2.x,&pt2.y);
    temp=add(&pt1,&pt2);
    printf("%d %d\n",temp.x,temp.y);
}