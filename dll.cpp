#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct dll{
	int data;
	struct dll *next;
};
int N;
struct dll* erase(struct dll *e)
{
	 struct dll *temp=(struct dll*) malloc(sizeof(struct dll));
	 temp=e->next->next;
	 free(e->next);
	 e->next=temp;
    return e;	 
}
void modify(struct dll *h,int n)
{
	//cout<<"chumma";
	int t;
	t=n%N;
	for(int i=0;i<t-1;i++)
	{
		h=h->next;
	}
	cout<<h->next->data<<" ";
	if(n==1)
	  return;
	h=erase(h);
	modify(h,n-1);
	return;
}
void init()
{
	struct dll *head = (struct dll*) malloc(sizeof(struct dll));
	struct dll *start;
	head->data=1;
	start=head;	
	for(int i=2;i<N;i++)
	{
		start->next=(struct dll*) malloc(sizeof(struct dll));
		start=start->next;
		start->data=i;
		
	}
	start->next=(struct dll*) malloc(sizeof(struct dll));
	start=start->next;
	start->data=N;
	start->next=head;
	modify(head,N);
}
int main()
{
	int n;
	cin>>N;
	init();
	return 0;
}
