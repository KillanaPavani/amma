//insertion,deletion,traversal on circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
int main()
{
	struct node *temp,*new,*head=NULL,*rem;
	int x,sel,op;
	printf("circular linked list\n");
	do
	{
	printf("\noperations:\n1.insertion\n2.deletion\n3.traversal\n");
	printf("select the operation that u r going to perform\n");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	{
	printf("\ninsertion\n1.begin\n2.middle\n3.end\n");
	printf("select where u want to insert\n");
	scanf("%d",&sel);
	switch(sel)
	{
		case 1:
		{
			printf("enter your inserted element\n");
			scanf("%d",&x);
			if(head==NULL)
			{
				head=malloc(sizeof(struct node));
				head->data=x;
				head->next=head;
			}
			else
			{
				new=malloc(sizeof(struct node));
				new->data=x;
				new->next=NULL;
				new->next=head;
				temp=head;
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				temp->next=new;
				head=new;
			}
		}
		break;
		case 2:
		{
			printf("enter your inserted element\n");
			scanf("%d",&x);
			if(head==NULL)
			{
				head=malloc(sizeof(struct node));
				head->data=x;
				head->next=head;
			}
			else
			{
				new=malloc(sizeof(struct node));
				new->data=x;
				new->next=NULL;
				new->next=head;
				temp=head;
				int count=1,k;
				printf("enter loc where u want to insert\n");
				scanf("%d",&k);
				while(count<k-1)
				{
					temp=temp->next;
					count++;
				}
				new->next=temp->next;
				temp->next=new;
			}
		}
		break;
		case 3:
		{
			printf("enter your inserted element\n");
			scanf("%d",&x);
			if(head==NULL)
			{
				head=malloc(sizeof(struct node));
				head->data=x;
				head->next=head;
			}
			else
			{
				new=malloc(sizeof(struct node));
				new->data=x;
				new->next=NULL;
				temp=head;
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				temp->next=new;
				new->next=head;
			}
		}
		break;
		default:
		{
			printf("invalid values");
		}
	}
	}
	break;
	case 2:
	{
		int ch;
		printf("enter where u want to delete\n1.begin\n2.middle\n3.end\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				rem=head;
				temp=head;
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				head=head->next;
				temp->next=head;
				free(rem);
			break;
			case 2:
				temp=head;
				int count=1,k;
				printf("enter loc where u want to delete\n");
				scanf("%d",&k);
				while(count<k-1)
				{
					temp=temp->next;
					count++;
				}
				rem=temp->next;
				temp->next=temp->next->next;
				free(rem);
			break;
			case 3:
				temp=head;
				while(temp->next->next!=head)
				{
					temp=temp->next;
				}
				rem=temp->next;
				temp->next=head;
				free(rem);
			break;
			default:
			{
				printf("invalid input");
			}
		}
	}
	case 3:
	{
		temp=head;
		printf("\nupdated cir list\n");
		do
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		while(temp!=head);
	}
	break;
	default:
	{
		printf("invalid input\n");
	}	
	}
	}
	while(op<=3);
	
}	
				
					
						
					
		

