#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
struct node 
{
  int d;
  struct node *next;	
};
void get(struct node **head,int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->d=data;
	newnode->next=*head;
	(*head)=newnode;
}
void swaplist(struct node **h)
{
	struct node *prev=*h;
	struct node *curr=(*h)->next;
	*h=curr;
	while(true)
	{
		struct node *n=curr->next;
		curr->next=prev;
		if(n==NULL||n->next==NULL)
		{
			prev->next=n;
			break;
		}
		prev->next=n->next;
		prev=n;
		curr=prev->next;
	}
}
void printlist(struct node *h)
{ 
   cout<<"out\n";
	while(h!=NULL)
	{
		cout<<h->d<<" ";
		h=h->next;
	}
}
int main()
{
    struct node *head=NULL;
    get(&head,6);
    get(&head,5);
    get(&head,4);
    get(&head,3);
    get(&head,2);
    get(&head,1);
    printlist(head);
    swaplist(&head);
    printlist(head);
	return 0;
}

