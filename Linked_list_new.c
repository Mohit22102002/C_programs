#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node  *next;
};

struct node* createLinkedlist(int n);
void Traverse(struct node *head);
void Append(struct node*head,int append);
void Dele(struct node*head,int del);
void searchElement(int search,struct node *head);

int main()
{
	int n,op,search,del,append;
	printf("Enter how many node to have in linked list:");
	scanf("%d",&n);
	struct node *head;
	head=createLinkedlist(n);
	do
	{
	printf("\nSelect operation to perform:\n1)Traverse\n2)Append\n3)Delete\n4)Search\n");
	printf("Operation to perform:");
	scanf("%d",&op);
	switch(op)
	{
		case 1: Traverse(head);
		        break;
		        
		case 2: printf("\nEnter element to be append:");
              	scanf("%d",&append);    
				Append(head,append);  
				break;  
				  
		case 3: printf("\nEnter element to delete:");
		        scanf("%d",&del);
		        Dele(head,del);
				break;	
				
		case 4: printf("\nEnter element to search:");
	            scanf("%d",&search);
                searchElement(search,head);
	    		break;	
	}
    }
	while(op!=5);
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

void Traverse(struct node *head)
{
    struct node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d  ",p->data);
		p=p->next;
	}
}

void Append(struct node*head,int append)
{
	struct node *p;
	struct node *temp;
	p=head;
	temp=(struct node *)malloc(sizeof(struct node*));
	temp->data=append;
	temp->next=NULL;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=temp;
	return;
}

void Dele(struct node*head,int del)
{
	struct node *temp;
	struct node *pre;
	temp=head;
	if(temp==NULL)
	printf("List is already empty");
	else
	{
	while(temp->data!=del&&temp!=NULL)
	{
	pre=temp;	
	temp=temp->next;	
	}
    }
    pre->next=temp->next;
    free(temp);
	printf("%d deleted successfully",del);	
}
void searchElement(int search,struct node *head)
{
	struct node *p;
	struct node *temp;
	p=head;
	int count=0;
	while(p!=NULL)
	{
		if(p->data==search)
		{
			printf("Element found at %d index",count);
			break;
		}
		else 
		{
			count=count+1;
			p=p->next;
			if(count==5)
	    	printf("Element not found!!!!!!!!");
		}
	
	}
}
