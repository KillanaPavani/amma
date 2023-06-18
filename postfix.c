#include<stdio.h>
#include<string.h>
int stack[30];
int top=-1;
void push(int val)
{
 stack[++top]=val;
}
int pop()
{
 int val;
 val=stack[top];
 top--;
 return val;
}
void main()
{
 int val,i,val1,val2;
 char postfix[40],op;
 scanf("%s",postfix);
 for(i=0;i<strlen(postfix);i++)
 {
  if(postfix[i]>=97 && postfix[i]<=122)
  {
   printf("Enter the value of %c",postfix[i]);
   scanf("%d",&val);
   push(val);
  }
  else
  {
   op=postfix[i];
   val1=pop();
   val2=pop();
   switch(op)
   {
    case'+':
     val=val2+val1;
     break;
    case'-':
     val=val2-val1;
     break;
    case'*':
     val=val2*val1;
     break;
    case'/':
     val=val2/val1;
     break;
     case'(':
     case'{':
          push(postfix[i]);
          break;
     case')':
     case'}':
          pop();
          break;
   }
   push(val);
  }
 }
  printf("%d",pop());
 }
     
