#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
void push()
{
 int x;
 if(top==size-1)
 {
  printf("stack overflow\n");
 }
 else
 {
  printf("enter the element:\n");
  scanf("%d",&x);
  top++;
  stack[top]=x;
 }
}
void pop()
{
 if(top==-1)
 {
  printf("stack underflow\n");
 }
 else
 {
  printf("deleted element:%d\n",stack[top]);
  top--;
 }
}
void display()
{
 if(top==-1)
 {
  printf("no element\n");
 }
 else
 {
  int i;
  for(i=top;i>=0;i--)
  {
   printf("%d\n",stack[i]);
  }
 }
}
 int main()
 {
  int opt;
  while(1)
  {
   printf("Enter 1.push\n 2.pop\n 3.display\n 4.exit\n");
   scanf("%d",&opt);
   switch(opt)
   {
    case 1:
     push();
     break;
    case 2:
     pop();
     break;
    case 3:
     display();
     break;
    case 4:
     exit(0);
    }
   }
  }
  
