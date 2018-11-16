#include<stdio.h>
#include<stdlib.h>
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
        struct node *next; /*pointer to next link*/
    };
typedef struct node NODE;/*Define NODE as data type struct node*/ 
typedef struct node *func;
 
void split(NODE *source,NODE **start,NODE **mid)  /* function to split the linked list */
{
NODE  *head1,*head2;
if (source==NULL || source->next==NULL)
  {
    *start= source;
     *mid= NULL;
  }/* base case when there is only one node ini linked list */
else
  {
     head1=source;
     head2=source->next;
     while (head2!= NULL)
    {
     head2=head2->next;
     if (head2!= NULL)
    {
     head1=head1->next;
     head2=head2->next;
    }
    }/* head2 is twice as fast as head1 so when head2 reaches end head1 is at mid */
*start= source; /*assignig the head1->next to mid and source to start */
*mid=head1->next;
head1->next = NULL;
}
} /* breaking the linklist by ending the first splitted linked list */

func sort(NODE *a,NODE *b) /* this function actually acts as a merging function and merges the two linked list by comparing the dob */
{
  NODE *result = NULL;/* result the pointer to first element of the sorted linked list of the sorted linked list*/ 
  if (a == NULL)
  return(b);/* base case */
  else if (b==NULL)
  return(a);/* base case */
  if (strcmp(a->std.name,b->std.name)<0)
  {
     result = a;
     result->next = sort(a->next, b);/* recursive */
  }
  else
  {
     result = b;
     result->next = sort(a, b->next);/* recursive */
  }
return(result);/* returns the pointer to the first element */
}

void merge(NODE **first_ref)/* this function controls the flow of all other ones and splits and sorts and merges */
{
  struct node *first=*first_ref;
  NODE *a,*b;
  if ((first== NULL) || (first->next == NULL))
  {
    return; /* base case */
  }
  split(first,&a,&b); /* to the split */
  merge(&a);
  merge(&b);
  *first_ref =sort(a,b);/* setting the pointer to pointer first_ref to the start of the sorted list i.e ressult from sort function */
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
    
    int n;
    scanf("%d",&n);    /*no. of inputs to be taken*/

    NODE *head,*first_ref,*last,*first, *temp = 0;/*declare pointers to NODE*/
    first = 0;                    /*the first node*/
 
    for(n;n>0;n--)
    {
        head  = (NODE *)malloc(sizeof(NODE));   /*leading head of our linkedlist*/
        scanf("%s %2d %2d %4d %d %lf",head->std.name,&head->std.dob.dd,&head->std.dob.mm,&head->std.dob.yyyy,&head->std.height,&head->std.weight);   /*scanning data*/
        if (first != 0)
        {
            temp->next = head;   /*elements of likedlist*/
            temp = head;
            if(n==1)
            last=head;                        
        }
        else
        {
            first = temp = head;  /*taking the first element*/
            first_ref->next=first;
        }
    }
    merge(&first); /*calling the merge function */
    print(first);
    
    return 0;
    }
  





