#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
int cnt=0;
struct node *temp;
struct node* getnode(int d)
{
	struct node *temp;
	temp=new node;
	temp->data=d;
	temp->next=NULL;
	return temp;
}
void print(struct node *curr)
{
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr=curr->next;
	}  
}
void swap(struct node **head)
{
	struct node *prev=*head;
	struct node *current=(*head)->next;
	*head=current;
	 while(1)
	 {
	   struct node *n=current->next;
	   current->next=prev;
	   if(n==NULL||n->next==NULL)
	   {
	      prev->next=n;
		  break;
       }
	   prev->next=n->next;
	   prev=n;
	   current=prev->next;
	 }
}
int main()
{
	int i=1;
	struct node *head=getnode(i++);
	head->next=getnode(i++);
	head->next->next=getnode(i++);
	head->next->next->next=getnode(i++);
	head->next->next->next->next=getnode(i++);
	swap(&head);
	print(head);
	return 0;
}
