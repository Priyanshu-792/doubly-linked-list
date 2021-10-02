#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
	
};
struct node *head,*tail,*newnode,*temp;
void displayList();
void insertatbeg();
void insertatend();
int main()
{
	int i =0,n;
	printf("Enter the number of datas to be stored initially: \n");
	scanf("%d",&n);
	head=0,tail=0;
	printf("\nEnter  %d datas:\n",n);
	while(i<n)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0)
	  head=tail=newnode;
	else{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}  
	
	i++;
	}
printf("\nThe entered data is:\n");
 displayList();
int choice;
printf("\nIf you want to insert at beggining then press 1 or if you want to insert at the end press 2\n") ;
scanf("%d",&choice);
if(choice==1)
{
	insertatbeg();
	displayList();
	
}
else if(choice==2)
{
	insertatend();
	displayList();
}
else
printf("\n Nothing to enter");
 
}


void displayList()
{
	temp=head;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
}


void insertatbeg()
{
	printf("\nEnter the data needed to be insert at beggining:");
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		  newnode->next=0;
	      newnode->prev=0;
		head->prev=newnode;
        newnode->next=head;
		head=newnode;
		
	
}

void insertatend(){
		printf("\nEnter the data needed to be insert at End:");
		newnode=(struct node*)malloc(sizeof(struct node));
			scanf("%d",&newnode->data);
		      newnode->next=0;
		      newnode->prev=0;
		    tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;  
		
	
	
}
