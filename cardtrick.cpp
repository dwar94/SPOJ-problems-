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
  struct node *next,*prev;
};
typedef struct node n;
n *newnode,*first=NULL,*last=NULL,*ne,*ptr;
n* newnod(int data)
{
	newnode=(n *)malloc(sizeof(struct node));
	newnode->d=data;
	newnode->next=NULL;
	newnode->prev=NULL;	
	return newnode;
}
void get(int d)
{
	ne=newnod(d);
	if(first==last&&first==NULL)
	{
		first=last=ne;
		first->next=last->prev=NULL;
		first->prev=last->next=NULL;
	}
	else
	{
		last->next=ne;
		ne->prev=last;
		last=ne;
		last->next=first;
		first->prev=last;
	}
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n;
    	scanf("%d",&n);
    	for(int i=0;i<n;i++)
		 get(0);
		
		ptr=first; 
		for(int i=1;i<=n;i++)
		{
			int j=0;
			while(j<=i)
			 {
			   if(j==i)
			   {
			   	if(ptr->d!=0)
			   	{
			   		while(ptr->d!=0)
			   		 ptr=ptr->next;
			   	}
			   	ptr->d=i; 
			   	j++;
			   }
			   else if(ptr->d==0)	
			   {
			   	j++;
			   	//cout<<"i:"<<i<<" j:"<<j<<endl;
			   } 	
				ptr=ptr->next;
				
			 } 
		
			// ptr=ptr->next;
		    
		}
		
		ptr=first;
		for(int i=0;i<n;i++)
		{
			printf("%d",ptr->d);
			ptr=ptr->next;
		}
		printf("\n");
		first=last=ne=ptr=NULL;
    }
    
	return 0;
}


