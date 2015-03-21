#include<stdio.h>
#include<iostream>
using namespace std;
struct stack
{
	int data,size;
    struct stack *next,*top;	
    struct stack *push(int da)
    {
	 struct stack *temp=new stack();
	 temp->data=da;
	 temp->next=top;
	 top=temp;
	 cout<<"push success\n";
     //cout<<"exits\n";
    }
    int pop()
   {
	if(top==NULL)
	  return -1;  
	int ret=top->data;
	top=top->next;
	return ret;
   }
}*top;
//struct stack *top;

int main()
{
   struct stack *st=new stack();
   st->push(5);
   st->push(4);
   st->push(6);
   struct stack *st2=new stack();
   st2->push(st->pop());
   st2->push(st->pop());
   st2->push(st->pop());
   for(int i=0;i<3;i++)
   {
   	  cout<<st2->pop()<<" ";
   }
   
	
}
