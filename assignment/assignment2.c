#include <stdio.h>
#include <stdlib.h>
 
struct DOB               /*structure for storing the date of birth in dd mm yyyy format*/
{
    int dd;
    int mm;
    int yyyy;
};
struct student          /*structure for storing the student data*/
{
    char name[64];
    struct DOB dob;
    int height;
    double weight;
} ;
struct node
    {
        struct student std;
        struct node *next;
        struct node *previous;
    };
typedef struct node NODE;/*Define NODE as data type struct node*/ 
void print(NODE *temp)
{
    if(temp==NULL)
    return;
    else
    {
    print(temp->next); 
    printf("%s %02d/%02d/%04d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   /*printing data recursively in reverse */
    }
}

int main()
{
    
    int n;
    scanf("%d",&n);    /*no. of inputs to be taken*/

    NODE *head, *first,*last, *temp = 0;/*declare pointers to NODE*/
    first=0;                    /*the first node*/
     
    for(n;n>0;n--)
    {
        head  = (NODE *)malloc(sizeof(NODE));   /*leading head of our linkedlist*/
        scanf("%s %2d %2d %4d %d %lf",head->std.name,&head->std.dob.dd,&head->std.dob.mm,&head->std.dob.yyyy,&head->std.height,&head->std.weight);   /*scanning data*/
        if (first != 0)
        {
            temp->next = head;   /*elements of likedlist*/
            head->previous=temp;
            temp = head;
                                   
        }
        else
        {
            first = temp = head;  /*taking the first element*/
        }
    }
    print(first);
    return 0;
}