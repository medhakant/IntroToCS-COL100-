#include <stdio.h>
#include <stdlib.h>

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

int main()
{

    int n,N,i;
    scanf("%d",&n);    //no. of inputs to be taken
    N=n;
    NODE *head,*first,*last, *temp = 0;//declare pointers to NODE
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
    fflush(stdin);
    temp =last ;          //giving the first value to temp
     for(;temp!=0;)
    {
        printf("%s %2d %2d %4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   //printing data
        temp = temp->previous;  //moving the temp to the next element
    }
}//Medha Kant
//2017cs10350
