#include <stdio.h>
#include <stdlib.h>
#include<string.h>

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
} ;
struct node
    {
        struct student std;
        struct node *next;
        struct node *previous;
    };
typedef struct node NODE;//Define NODE as data type struct node
typedef struct node* func;
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
void swap(struct student *one,struct student *two)
{
    printf("swap executed\n");
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
    printf("swap executed end\n");

}
func partition (NODE *start,NODE *end) {
    printf("partition executed\n");
    NODE *head,*piv_next,*temp;
    head=start->next;
    piv_next=start;
    printf("partition executed\n");
    for(head;head!=end->next;head=head->next)  {
    /*rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. */

          if (compare(start->std.dob,head->std.dob)==-1) {
              piv_next=piv_next->next;
           swap(&(head->std),&(piv_next->std));
           temp=piv_next;
            printf("%s %2d %2d %4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);
        }
    }
      if(piv_next!=0 && piv_next!=start)
  {swap(&(start->std),&(piv_next->std));
printf("pivot put execution ended\n");}//put the pivot element in its proper place.
  printf("return execution started\n");
  temp=start; 
  for(;temp!=0;)
    {
        printf("%s %2d %2d %4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   //printing data
        temp = temp->next;  //moving the temp to the next element
    } 
  return piv_next;                      //return the position of the pivot
}
void quick_sort (NODE *head,NODE *tail) {
    printf("quick_sort executed\n");
    if((head->next)!=tail) {
          //stores the position of pivot element
          NODE* piv_pos = partition (head,tail) ; 
          printf("return received\n");
          if((head!=piv_pos->previous))    
          {printf("quiick sort 1\n");
              quick_sort (head, piv_pos->previous);
            printf("quiick sort 1 ended\n"); }   //sorts the left side of pivot.
          if((tail!=piv_pos->next))
          {printf("quiick sort 2\n");
          quick_sort (piv_pos->next,tail) ;
        printf("quiick sort 2 ended\n");} //sorts the right side of pivot.
    }
 }

int main()
{

    int n,N,i;
    scanf("%d",&n);    //no. of inputs to be taken
    N=n;
    NODE *head,*trail,*first,*last, *temp = 0;//declare pointers to NODE
    first = 0;                    //the first node
    last=0;

    for(n;n>0;n--)
    {
        head=0;
        head  = (NODE *)malloc(sizeof(NODE));   //leading head of our linkedlist
        scanf("%s %2d %2d %4d %d %lf",head->std.name,&head->std.dob.dd,&head->std.dob.mm,&head->std.dob.yyyy,&head->std.height,&head->std.weight);   //scanning data
        if (first != 0)
        {
            temp->next = head;   //elements of likedlist
            head->previous=temp;
            temp = head;
            if(n==1)
            last=head;

        }
        if(first==0)
        {
            first = temp = head;  //taking the first element
        }
    }
    trail=last->next;
    fflush(stdin);
    temp->next=0;
    quick_sort(first,last);
    temp =first;          //giving the first value to temp
     for(;temp!=0;)
    {
        printf("%s %2d %2d %4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   //printing data
        temp = temp->next;  //moving the temp to the next element
    }
}//Medha Kant
//2017cs10350
