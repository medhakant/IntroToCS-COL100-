#include <stdio.h>

int main()
{   double mb,ab,r,prob;
    scanf("%lf %lf %lf",&mb,&ab,&r);
    prob=r*(((1-mb)*ab)+((1-ab)*mb));
    printf("%.6f",prob);
    return 0;
}
