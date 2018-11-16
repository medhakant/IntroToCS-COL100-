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
    };
typedef struct node NODE;//Define NODE as data type struct node 
typedef struct node *func;
func swap(NODE *one,NODE *two)
{
    strcpy(two->std.name,one->std.name);
    one->std.dob=two->std.dob;
    one->std.height=two->std.height;
    one->std.weight=two->std.weight;
    return one;
    
}
func search(NODE *start,int n)
{
if(n==0)
return start;
else
return search(((*start).next),n-1);
}

int main()
{
    
    int n;
    scanf("%d",&n);    //no. of inputs to be taken

    NODE *head, *first, *temp = 0;//declare pointers to NODE
    first = 0;                    //the first node
 
    for(n;n>0;n--)
    {
        head  = (NODE *)malloc(sizeof(NODE));   //leading head of our linkedlist
        scanf("%s %2d %2d %4d %d %lf",head->std.name,&head->std.dob.dd,&head->std.dob.mm,&head->std.dob.yyyy,&head->std.height,&head->std.weight);   //scanning data
        if (first != 0)
        {
            temp->next = head;   //elements of likedlist
            temp = head;
                        
        }
        else
        {
            first = temp = head;  //taking the first element
        }
    }
    fflush(stdin);
    swap(search(first,0),search(first,1));
    temp->next = 0;
    temp = first;          //giving the first value to temp
    for(;temp!=0;)
    {
        printf("%s %2d %2d %4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   //printing data
        temp = temp->next;  //moving the temp to the next element
    }
}//Medha Kant
//2017cs10350