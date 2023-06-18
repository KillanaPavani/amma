//mid problem
#include<stdio.h>
#include<stdlib.h>
struct node*head1=NULL,*head2=NULL,*head3=NULL,*new=NULL,*temp1=NULL,*temp2=NULL,*tail=NULL;
struct node
{
 int data;
 struct node*next;
};
//creating first linked list
int main()
{
 int count,x;
 printf("enter the number of nodes you want in first linked list:");
 scanf("%d",&count);
 while(count>0)
 {
  printf("enter the data:");
  scanf("%d",&x);
  if(head1==NULL)
  {
   head1=malloc(sizeof(struct node));
   head1->data=x;
   head1->next=NULL;
   temp1=head1;
  }
  else
  {
   new=malloc(sizeof(struct node));
   new->data=x;
   new->next=NULL;
   head1->next=new;
   head1=new;
  }
  count--;
}
//creating second linked list
printf("enter the number of nodes you want in second linked list:");
scanf("%d",&count);
while(count>0)
{
 printf("enter the data:");
 scanf("%d",&x);
 if(head2==NULL)
 {
  head2=malloc(sizeof(struct node));
  head2->data=x;
  head2->next=NULL;
  temp2=head2;
 }
 else
 {
  new=malloc(sizeof(struct node));
  new->data=x;
  new->next=NULL;
  head2->next=new;
  head2=new;
 }
 count--;
}
//merging two linked lists
int flag=0;
while(temp1!=NULL||temp2!=NULL)
{
 if(head3==NULL)
 {
  head3=malloc(sizeof(struct node));
  head3->data=temp1->data;
  head3->next=NULL;
  tail=head3;
  temp1=temp1->next;
 }
 else
 {
  if(temp1!=NULL && flag==1)
  {
   new=malloc(sizeof(struct node));
   new->data=temp1->data;
   new->next=NULL;
   head3->next=new;
   head3=new;
   temp1=temp1->next;
   flag=0;
  }
  else
  {
   new=malloc(sizeof(struct node));
   new->data=temp2->data;
   new->next=NULL;
   head3->next=new;
   head3=new;
   temp2=temp2->next;
   flag=1;
  }
 }
}
//printing new merged linked list
printf("this is your new merged linked list:\n");
while(tail!=NULL)
{
 printf("%d   ",tail->data);
 tail=tail->next;
}
return 0;
}
