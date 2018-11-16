#include <stdio.h>

int main() {
    int a[100],min,dummy,x,i,j,b,d,pos;
    printf("Enter a number between 1-100\n");
    scanf("%d",&x);
    for(b=0;b<x;b++)
    scanf("%d",&a[b]);
    for(i=0;i<x;i++)
    {   
        min=a[i]; pos=i;
        for(j=i+1;j<x;j++)
        {   
            if(min>a[j])
            {min=a[j]; pos=j;}
        }
    dummy=a[i];
    a[i]=min;
    a[pos]=dummy;
    
    }
 for(d=0;d<x;d++)
 printf("%d\n",a[d]);
 return 0;
}