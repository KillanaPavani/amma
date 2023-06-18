//insertion,deletion,traversal on singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp=NULL,*new,*temp2=NULL,*temp3=NULL;
int main()
{
int ch,op,x;

do{
	printf("\noperations on singly list\n1.insert\n2.delete\n3.traverse\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
		printf("enter data to insert:");
		scanf("%d",&x);
		printf("enter where you want to insert\n1.begin\n2.middle\n3.end\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			{
			if(head==NULL)
			{
			new=malloc(sizeof(struct node));
			new->data=x;
			new->next=head;
			head=new;
			}
			else
			{
				new=malloc(sizeof(struct node));
				new->data=x;
				new->next=NULL;
				new->next=head;
				head=new;
			}
			}
				
			break;
			
			case 2:
			{
			if(head==NULL)
			{
			new=malloc(sizeof(struct node));
			new->data=x;
			new->next=head;
			head=new;
			}
			else
			{
			new=malloc(sizeof(struct node));
			new->data=x;
			new->next=NULL;
			temp=head;
			int count=1,loc;
			printf("enter loc where u want to insert element:");
			scanf("%d",&loc);
			while(count<loc)
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
			if(head==NULL)
			{
			new=malloc(sizeof(struct node));
			new->data=x;
			new->next=head;
			head=new;
			}
			else
			{
			new=malloc(sizeof(struct node));
			new->data=x;
			new->next=NULL;
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=new;
			}
			break;
			default:
			{
				printf("invalid input");
			}
			}
		}
		}
		break;
			
		case 2:
		{
		printf("enter where you want to deletion\n1.begin\n2.middle\n3.end\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			{
			temp2=head;
			head=head->next;
			free(temp2);
			}
			break;
			
			case 2:
			{
			temp=head;
			int k,count=1;
			printf("enter loc where u want to delete:\n");
			scanf("%d",&k);
			while(count<k-1)
			{
				temp=temp->next;
				count++;
			}
			temp2=temp->next;
			temp->next=temp->next->next;
			free(temp2);
			}
			break;
			
			case 3:
			{
			temp=head;
			while(temp->next->next==NULL)
			{
				temp=temp->next;
			}
			temp3=temp->next;
			temp->next=NULL;
			free(temp3);
			}
			break;
			default:
			{
				printf("invalid values");
			}
		}	
		}
		break;
		case 3:
		{
		printf("\n*****the updated singly list*****\n");
		temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		}
		break;
		default:
		{
			printf("invalid values");
		}
	}
	}
	while(ch<=3);

}	

	
