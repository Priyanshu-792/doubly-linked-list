#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
	
};
struct node *head , *temp, *newnode , *seclast;
void insertatbegin();
void insertend();
void deleteb();
void lastdelete();
int main()
{
	
	int c,i=0;
	printf("Enter number of datas:\n");
	scanf("%d",&c);
	head=0;
	printf("Enter the datas\n");
	while(i<c)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
			
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
			
		}
		i++;
	}
	temp=head;
	printf("the linked list  dats are\n");
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
		int choice;
		printf("\n If you want to insert data at the beggining press 1 or at end then press 2 or if you dont want to insert then press any other number\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("\nInsertion of linked list from the beggining\n");
		    insertatbegin();
		}
		else if(choice==2)
		{
		printf("\nInsertion of linked list from the end\n");
			insertend();
		}
		else
		  printf("nothing inserted\n")	;
	int dc;
	printf("\n If you want to delete data from the beginning then press 1 or at the end then press 2 or if nothing should be deleted then press any other number\n");
	scanf("%d",&dc)  ;
	if(dc==1)
	{
		printf("\nDeletion of linked list from the beggining\n");
	   deleteb();
    }
    else if(dc==2)
   	{
		printf("\nDeletion  of linked list from the End\n");
	   lastdelete();
    
	}
	else
	 printf("\n Nothing Deleted");
		
		
	}
void insertatbegin()
{ 
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data need to be inserted\n");
	scanf("%d",&newnode->data);

	newnode->next=head;
	head=newnode;
		temp=head;
		printf("datas after adding in beggining\n");
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
			
		}
	
		
	}
void	insertend()
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter data need to be inserted at end\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		printf("datas after insering at the end\n");
		temp=head;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		
		
	}
void deleteb()
	
{

		  	temp=head;
	temp=temp->next;
	head=temp;
	temp=head;
	while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	
}
void lastdelete()

{ 
	temp=head;
	while(temp->next!=0)
	{
		seclast=temp;
		temp=temp->next;
	}


	seclast->next=0;
	free(temp);
	temp=head;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
}


