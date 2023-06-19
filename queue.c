#include<stdio.h>
#include<stdlib.h>
#define size 50
int rear=-1,front=-1;
int queue[size];
void enqueue()
{
 if(rear==size-2)
 {
  printf("no space to enqueue\n");
 }
 else
 {
  int x;
  printf("enter the element to insert\n");
  scanf("%d",&x);
  rear++;
  queue[rear]=x;
 }
}
void dequeue()
{
 if(rear==-1 || front==rear)
 {
  printf("no element to delete\n");
  rear=-1;
  front=-1;
 }
 else
 {
  front++;
  printf("The deleted element is %d\n",queue[front]);
 }
}
void display()
{
 if(rear==-1 || front==rear)
 {
  printf("no element to display\n");
 }
 else
 {
  int i;
  for(i=front+1;i<=rear;i++)
  {
   printf("%d",queue[i]);
  }
 }
}
int main()
{
 int opt;
 while(1)
 {
  printf("Enter 1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:
     enqueue();
     break;
   case 2:
     dequeue();
     break;
   case 3:
     display();
     break;
   case 4:
     exit(0);
   }
  }
 }
 
   
