#include<stdio.h>
int main(void)
{
    int sum;
    struct data
    {
        int data;
        struct data *next;
    }a,b,c,*ptr,*head;
    head=&a; a.data=10;
    b.data=5; a.next=&b;
    c.data=7; b.next=&c;
    c.next=NULL; 
    sum=0;
    ptr=head;
    do{
        ptr=ptr->next;
        sum+=ptr->data;
    }while(ptr->next!=NULL);
    printf("%d",sum);
    return 0;
}