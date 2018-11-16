#include<stdio.h>
#include<stdlib.h>
  
struct DOB               //structure for storing the date of birth in dd mm yyyy format
{
    int dd;
    int mm;
    int yyyy;
};
struct student          //structure for storing the student data
{
    char name[64];
    struct DOB dob;
    int height;
    double weight;
  };
  
int compare(struct DOB dob1,struct DOB dob2)
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
struct NODE
{
    struct student std;
    struct NODE *next;
};
struct NODE *SortedMerge(struct NODE *a, struct NODE *b);
void FrontBackSplit(struct NODE *source,
          struct NODE **frontRef, struct NODE **backRef);
void MergeSort(struct NODE **headRef)
{
  struct NODE *head = *headRef;
  struct NODE *a;
  struct NODE *b;
 
  if ((head == NULL) || (head->next == NULL))
  {
    return;
  }
 
  FrontBackSplit(head, &a, &b); 
 
  MergeSort(&a);
  MergeSort(&b);
 
  *headRef = SortedMerge(a, b);
}
 
struct NODE *SortedMerge(struct NODE *a, struct NODE *b)
{
  struct NODE* result = NULL;
  if (a == NULL)
     return(b);
  else if (b==NULL)
     return(a);
  if (compare(a->std.dob,b->std.dob)==1)
  {
     result = a;
     result->next = SortedMerge(a->next, b);
  }
  else
  {
     result = b;
     result->next = SortedMerge(a, b->next);
  }
  return(result);
}
 
void FrontBackSplit(struct NODE *source,struct NODE **frontRef, struct NODE **backRef)
{
  struct NODE *fast;
  struct NODE *slow;
  if (source==NULL || source->next==NULL)
  {
    *frontRef = source;
    *backRef = NULL;
  }
  else
  {
    slow = source;
    fast = source->next;
    while (fast != NULL)
    {
      fast = fast->next;
      if (fast != NULL)
      {
        slow = slow->next;
        fast = fast->next;
      }
    }
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
  }
}
 
int main()
{
    
    int n;
    scanf("%d",&n);    //no. of inputs to be taken

    struct NODE *head,*first_ref,*last,*first, *temp = 0;//declare pointers to NODE
    first = 0;                    //the first node
 
    for(n;n>0;n--)
    {
        head  = (struct NODE *)malloc(sizeof(struct NODE));   //leading head of our linkedlist
        scanf("%s %2d %2d %4d %d %lf",head->std.name,&head->std.dob.dd,&head->std.dob.mm,&head->std.dob.yyyy,&head->std.height,&head->std.weight);   //scanning data
        if (first != 0)
        {
            temp->next = head;   //elements of likedlist
            temp = head;
            if(n==1)
            last=head;                        
        }
        else
        {
            first = temp = head;  //taking the first element
            first_ref->next=first;
        }
    }
    fflush(stdin);
    temp->next = 0;
    MergeSort(&first);
    temp =first;          //giving the first value to temp
    for(;temp!=0;)
    {
        printf("%s %2d %2d %4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   //printing data
        temp = temp->next;  //moving the temp to the next element
    }
    }
  