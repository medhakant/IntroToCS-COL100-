#include<stdio.h>
#include<string.h>
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
} ;
struct node
    {
        struct student std;
        struct node *next;
        struct node *previous;
    };
typedef struct node NODE;//Define NODE as data type struct node
typedef struct node *func;

func search(NODE *start,int n)
{
if(n==0)
return start;
else
return search(((*start).next),n-1);
}

func swap(NODE *one,NODE *two)
{
    strcpy(two->std.name,one->std.name);
    one->std.dob=two->std.dob;
    one->std.height=two->std.height;
    one->std.weight=two->std.weight;
    return one;
    
}

typedef struct DOB dob;
int compare(dob dob1,dob dob2)
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

void merge(NODE *first , int start, int mid, int end) {
    //stores the starting position of both parts in temporary variables.
   int p = start ,q = mid+1;
   int n=end-start+1;
   int k=0;
   printf("the control is with merge function. iteration =%d",k);
   k++;
    NODE *head, *temp_first, *temp = 0;//declare pointers to NODE
    first = 0;                    //the first node
 
    for(n;n>0;n--)
    {
        head  = (NODE *)malloc(sizeof(NODE));   //leading head of our linkedlist
         for(int i = start ;i <= end ;i++) {
       if(p > mid)      //checks if first part comes to an end or not .
       {
           head=search(first,p);
           q++;
       }
      else if ( q > end)   //checks if second part comes to an end or not
      {
           head=search(first,p);
           p++;
       }
     else if(compare(search(first,p)->std.dob,search(first,q)->std.dob))     //checks which part has smaller element.
       {
           head=search(first,p);
           p++;
       }
      else
      {
           head=search(first,q);
           q++;
       }
    }
        
        if (temp_first != 0)
        {
            temp->next = head;   //elements of likedlist
            temp = head;
                        
        }
        else
        {
            temp_first = temp = head;  //taking the first element
        }
    }
   temp=temp_first;
   while(temp_first!=0)
   {
       swap(search(first,start),temp);
       temp=temp->next;
       start++;
    }
    temp->next = 0;
    temp = temp_first;          //giving the first value to temp
    for(;temp!=0;)
    {
        printf("%s %2d %2d %4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   //printing data
        temp = temp->next;  //moving the temp to the next element
    }
   }
   void merge_sort (NODE *first , int start , int end )
   {
       int l=0; printf("the control is with merge_sort,iteration medha=%d\n",l);l++;
           while(end>start) {
           int k=0; printf("the control is with merge_sort,iteration priyanka=%d\n",k);k++;
           int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (first, start , mid ) ; 
           printf("first merge\n");                // sort the 1st part of array .
           merge_sort (first,mid+1 , end ) ; 
           printf("second merge\n");             // sort the 2nd part of array.

         // merge the both parts by comparing elements of both the parts.
          merge(search(first,start) ,start , mid , end );   
   }                    
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
    merge_sort(first,0,n-1);
    temp->next = 0;
    temp = first;          //giving the first value to temp
    for(;temp!=0;)
    {
        printf("%s %2d/%2d/%4d %d %lf\n",temp->std.name,temp->std.dob.dd,temp->std.dob.mm,temp->std.dob.yyyy,temp->std.height,temp->std.weight);   //printing data
        temp = temp->next;  //moving the temp to the next element
    }
    }
//successfully debugged and tested 
//Medha Kant