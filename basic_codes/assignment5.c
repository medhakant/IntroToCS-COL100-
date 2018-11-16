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
struct node /* going for a double linked list */
    {
        struct student std;
        struct node *next;
        struct node *previous;
    };
typedef struct node NODE;/*Define NODE as data type struct node*/
typedef struct node* func;/*Define NODE as data type pointer to struct node */
int compare(struct DOB dob1,struct DOB dob2) /* function to compare date of birth */
{
    if(dob1.yyyy<dob2.yyyy)
    return -1;
    if(dob1.yyyy>dob2.yyyy)
    return 1;
    else
    {
    if(dob1.mm<dob2.mm)
    return -1;
    if(dob1.mm>dob2.mm)
    return 1;
    else
    {
    if(dob1.dd<dob2.dd)
    return -1;
    if(dob1.dd>dob2.dd)
    return 1;
    else
    return 0;
    }
    }
}
void swap(struct student *one,struct student *two) /*function for swapping the data of the two structures*/
{
    struct student *temp;
    temp = (struct student*)malloc(sizeof(struct student));
    strcpy(temp->name,one->name);
    strcpy(one->name,two->name);
    strcpy(two->name,temp->name);
    temp->dob=one->dob;
    temp->height=one->height;
    temp->weight=one->weight;
    one->dob=two->dob;
    one->height=two->height;
    one->weight=two->weight;
    two->dob=temp->dob;
    two->height=temp->height;
    two->weight=temp->weight;
}
func partition (NODE *start,NODE *end) {
    NODE *ref,*piv_next,*temp;
    ref=start->next;
    piv_next=start;
    for(ref;ref!=end->next;ref=ref->next)  {
    /*rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. */

          if (compare(ref->std.dob,start->std.dob)==1) {
              piv_next=piv_next->next;
           swap(&(ref->std),&(piv_next->std));
        }
    }
      if(piv_next!=0 && piv_next!=start)
  swap(&(start->std),&(piv_next->std));
  return piv_next;                      /*return the position of the pivot*/
}

void quick_sort (NODE *head,NODE *tail) {
    if(head!=tail && head->previous!=tail) 
    {
        /*stores the position of pivot element*/
        NODE* piv_pos;
        piv_pos=(NODE *)malloc(sizeof(NODE));  
        piv_pos = partition (head,tail) ; 
          if(piv_pos->previous!=NULL)    
          quick_sort (head, piv_pos->previous); /*sorts the left side of pivot.*/
          if(piv_pos->next!=NULL)
          quick_sort (piv_pos->next,tail) ;/*sorts the right side of pivot*/
    }
 }
void print(NODE *temp)
{
    if(temp==NULL)
    return;
    else
    {
        print(temp->next);
        printf("%s %02d%02d%04d %d %g\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   /*printing data*/

    }
}
int main()
{

    int n,N,i;
    scanf("%d",&n);    /*no. of inputs to be taken*/
    N=n;
    NODE *head,*trail,*first,*last, *temp = 0,*front_ref;/*declare pointers to NODE*/
    first = 0;                    /*the first node*/
    last=0;

    for(n;n>0;n--)
    {
        head=0;
        head  = (NODE *)malloc(sizeof(NODE));   /*leading head of our linkedlist*/
        scanf("%s %2d %2d %4d %d %lf",head->std.name,&head->std.dob.dd,&head->std.dob.mm,&head->std.dob.yyyy,&head->std.height,&head->std.weight);   /*scanning data*/
        if (first != 0)
        {
            temp->next = head;   /*elements of likedlist*/
            head->previous=temp;
            temp = head;
            if(n==1)
            last=head;

        }
        if(first==0)
        {
            first = temp = head;  /*taking the first element*/
        }
    }

    quick_sort(first,last); /* calling in the quick_sort function to do the sorting*/
     print(first);
     return 0;
}