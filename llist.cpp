#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
int N;
struct node* erase(struct node *e)
{
	struct node *temp;
	temp=e->next->next;
	free(e->next);
	e->next=temp;
	return e;
}
void manip(struct node *h)
{
	struct node *odd=(struct node*)malloc(sizeof(struct node));
	struct node *st=h;
	cout<<"chumma";
	while(N--)
	{
			odd->data=h->next->data;
			cout<<h->data;
			h=erase(h);
			if(h->next!=NULL)
			   h=h->next;
			odd->next=(struct node*)malloc(sizeof(struct node));
			odd->next=odd;
			cout<<"chumma\n";
	}
	st->next=(struct node*)malloc(sizeof(struct node));
    st->next=odd;
	st->next=NULL;
	int i=5;
	while(i--)
	{
		cout<<odd->data<<" ";
		odd=odd->next;
	}
}
void init()
{
	struct node *h;
	h=(struct node*)malloc(sizeof(struct node));
	for(int i=10;i>0;i--)
	{  
	  h->data=i;
	  h->next=(struct node*)malloc(sizeof(struct node));
	  h->next=h;
    }
    manip(h);    
}
int main()
{
	cin>>N;
	init();
	return 0;
}
