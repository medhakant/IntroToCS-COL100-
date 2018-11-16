#includde<stdio.h>
struct linkedlist
{
  int data;
  int linkedlist *next;
};
typedef struct linkedlist *node;
node create()
{
  node temp;
  temp=malloc(sizeof(struct linkedlist));
  temp->next=NULL;
  return temp;
}
node addnode(node head,int value)
{
  node temp,p;
  temp=create();
  temp->data=value;
}
