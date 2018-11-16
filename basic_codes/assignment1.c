#include<stdio.h>

struct DOB               /*structure for storing the date of birth in dd mm yyyy format*/
{
    int dd;
    int mm;
    int yyyy;
};
struct student          /*structure for storing the student data */
{
    char name[64];
    struct DOB dob;
    int height;
    double weight;
} ;
 int main()
 {
     int N,i; 
     scanf("%d",&N);                  /*input the number of entries*/
     struct student std[N];          /*daclaring structure student std array with n entries*/ 
     for(i=0;i<N;i++)                /*loop to take the input*/
     scanf("%s %2d %2d %4d %d %lf",std[i].name,&std[i].dob.dd,&std[i].dob.mm,&std[i].dob.yyyy,&std[i].height,&std[i].weight);   /*scanning data*/
     for(i=0;i<N;i++)
     printf("%s %02d/%02d/%04d %dmm %lfkg\n",std[i].name,std[i].dob.dd,std[i].dob.mm,std[i].dob.yyyy,std[i].height,std[i].weight);
    }