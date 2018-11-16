#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
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
    };
typedef struct node NODE;/*Define NODE as data type struct node*/ 
typedef struct node *func;
func swap(NODE *one,NODE *two)/* function to swap the data of two given structures */
{
    NODE *temp;/* defining a temporary variable temp to store the value of one struccture */
    temp = (NODE *)malloc(sizeof(NODE));
    strcpy(temp->std.name,one->std.name);
    strcpy(one->std.name,two->std.name);
    strcpy(two->std.name,temp->std.name);
    temp->std.dob=one->std.dob;
    temp->std.height=one->std.height;
    temp->std.weight=one->std.weight;
    one->std.dob=two->std.dob;
    one->std.height=two->std.height;
    one->std.weight=two->std.weight;
    two->std.dob=temp->std.dob;
    two->std.height=temp->std.height;
    two->std.weight=temp->std.weight;
    
}
void print(NODE *temp)
{
    if(temp==NULL)
    return;
    else
    {
        printf("%s %02d%02d%04d %d %g\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   /*printing data*/
        print(temp->next);
    }
}

int main()
{
    
    int n,N,j,k;
    scanf("%d",&n);    /*no. of inputs to be taken*/
    N=n;
    NODE *head,*first_ref, *first, *temp = 0;/*declare pointers to NODE*/
    first = 0;                    /*the first node*/
 
    for(n;n>0;n--)
    {
        head  = (NODE *)malloc(sizeof(NODE));   /*leading head of our linkedlist*/
        scanf("%s %2d %2d %4d %d %lf",head->std.name,&head->std.dob.dd,&head->std.dob.mm,&head->std.dob.yyyy,&head->std.height,&head->std.weight);   /*scanning data*/
        if (first != 0)
        {
            temp->next = head;   /*elements of likedlist*/
            temp = head;
                        
        }
        else
        {
            first = temp = head;  /*taking the first element*/
        }
    }
    first_ref=(NODE *)malloc(sizeof(NODE));
    first_ref->next=first;/* first_ref is pointer to first*/
   for (j=0;j<N-1;j++)
    {
        for (k=0;k<N-j-1;k++)
        {
            if (strcmp(first->std.name,(first->next)->std.name)>0)
            {
                swap(first,first->next);
            }
            if(first->next!=0) 
            first=first->next;
        }
        first=first_ref->next;
    } /* iterating and comparing the data and swapping if needed */
   
    first=first_ref->next;/* calling the print function */
    print (first);
    return 0;
}