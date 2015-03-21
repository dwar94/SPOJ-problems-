#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool visit[10];
struct graph
{
  int data;
  struct graph *next;	
}*list[10];
struct graph *newnode(int data)
{
	struct graph *temp=new graph();
	temp->data=data;
	temp->next=NULL;
	return temp;
}
int main()
{
	bool ind=false;
	for(int i=0;i<10;i++)
	{
		list[i]=new graph();
	}
    list[1]=newnode(2);
    list[1]->next=newnode(7);
    list[1]->next=newnode(8);
    list[2]=newnode(3);
    list[2]->next=newnode(6);
    list[3]=newnode(4);
    list[3]->next=newnode(5);
    list[4]=NULL;
    list[5]=NULL;
    list[6]=NULL;
    list[7]=NULL;
    list[8]=newnode(9);
    list[8]->next=newnode(12);
    list[9]=newnode(10);
    list[9]->next=newnode(11);
    printf("Enter the from and to nodes whose should be verified\n");
    int from,to;
    scanf("%d%d",&from,&to);
    stack<int > st;
    st.push(from);
    int path[10];
    while(!st.empty())
    {
    	int v=st.top();
    	if(v==to)
    	{
    	  ind=true;
    	  break;
    	}  
    	st.pop();
    	if(!visit[v])
    	{
    		visit[v]=true;
    		struct graph *temp=list[v];
    		while(temp!=NULL)
    		{
    			path[temp->data]=v;
				st.push(temp->data);
    			temp=temp->next;
    		}
    	}
    }
    if(ind==true)
    { 
	 cout<<"path found\n"; 
	 int i=to;
	 while(path[i]!=from)
	 {
	 	cout<<path[i]<<" ";
	 	i=path[i];
	 }
    }
    else
	 cout<<"no-path\n" ;
	 
    
	
	
}
