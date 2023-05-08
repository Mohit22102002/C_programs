#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node  *next;
};

struct node* createLinkedlist(int n);
void display(struct node *head);
void two_3(int element,struct node *head);

int main()
{
	int n,element;
	printf("Enter how many node to have in linked list:");
	scanf("%d",&n);
	struct node *head;
	head=createLinkedlist(n);
	display(head);
	printf("\nEnter the element to store between 2nd and 3rd node:");
	scanf("%d",&element);
	printf("List after inserting element between 2nd and 3rd node:");
    display(head);

}

struct node *createLinkedlist(int n)
{
	struct node *head=NULL;
	struct node *temp=NULL;
	struct node *p=NULL;
	int i;
	for( i=0;i<n;i=i+1)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter data to store in %d node:",i+1);
		scanf("%d",&(temp->data));
		
		temp->next=NULL;
		
		if(head==NULL)
		head=temp;
		else
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
		    }
			p->next=temp;
		}
	}
	return head;
}

void display(struct node *head)
{
    struct node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d  ",p->data);
		p=p->next;
	}
}

void two_3(int element,struct node *head)
{
	struct node *p;
	struct node *temp;
	p=head;
	int count=0;
	temp=(struct node *)malloc(sizeof(struct node*));
	while(p!=NULL)
	{
		if(count==2)
		{
		p=p->next;
		p->next=temp;
		p->data=element;
		p=p->next;
	    }
		else
		{
	    count=count+1;
	    p=p->next;
	    }
	}
}
