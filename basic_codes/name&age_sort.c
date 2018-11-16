#include<stdio.h>
struct student
{
    char name[30];
    int age;
} std[5];
int main()
{
    int i,j,n=5;
    struct student temp;
    for(i=0;i<n;i++)
    scanf("%s %d",std[i].name,&std[i].age);
    
    for (j=0;j<n-1;j++)
    {
        for (i=0;i<n-j-1;i++)
        {
            if (std[i].age>std[i+1].age)
            {
              temp=std[i];
              std[i]=std[i+1];
              std[i+1]=temp;
            }
        }
    }
    printf("Names in sorted order of age-\n");
    for(i=0;i<n;i++)
    printf("%s %d\n",std[i].name,std[i].age);
}