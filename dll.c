#include <stdio.h>
#include <stdlib.h>
 struct node
 {
  int data;
  struct node *next;
  struct node *prev;
 };
 int main()
 {
  struct node *head=NULL,*new,*temp;
  int x,n;
  printf("no of elements in the list::");
  scanf("%d",&n);
  while(n>0)
  {
  printf("enter data to insert in the list:\n");
  scanf("%d",&x);
  if(head==NULL)
  {
    head=malloc(sizeof(struct node));
    head->data=x;
    head->next=NULL;
    head->prev=NULL;
  }
  else
  {
   new=malloc(sizeof(struct node));
   new->data=x;
   new->prev=NULL;
   new->next=head;
   head->prev=new;
   head=new;
  }
  n--;
 }
 for(temp=head;temp!=NULL;temp=temp->next)
 	printf("%d ",temp->data);
 }
