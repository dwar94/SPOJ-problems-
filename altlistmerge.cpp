#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node* getnode(int d)
{
	struct node *temp;
	temp=new node;
	temp->data=d;
	temp->next=NULL;
	return temp;
}
void join(struct node **h,struct node *h1)
{
	struct node *head=*h,*temp,*temp1;
	while(head!=NULL&&h1!=NULL)
	{
		if(head->next==NULL||h1->next==NULL)
		{
			head->next=h1;
			break;
		}  
		temp=head->next;
		temp1=h1->next;
		h1->next=temp;
		head->next=h1;
		head=temp;
		h1=temp1;
	}
}
void print(struct node *curr)
{
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr=curr->next;
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
	struct node *head1=getnode(i++);
	head1->next=getnode(i++);
	head1->next->next=getnode(i++);
	head1->next->next->next=getnode(i++);
	head1->next->next->next->next=getnode(i++);
    join(&head,head1);
    print(head);
	return 0;
}
