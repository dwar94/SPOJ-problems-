#include<stdio.h>
#include<iostream>
class node
{
	char data;
	node next;
}
char fun(int,node);
void palindrome(node);
void palindrome(node list)
{
	int i,n=1;
	Node temp;
	temp=list->next;
	while(temp!=NULL)
	{
		temp=temp->next;
		n++;
	}
	for(i=0;i<n/2;i++)
	{
		if(list->data==fun(n-i+1,list))
		{
			if(i!=n/2)
			 continue;
			else
			 printf("the string is a palindrome"); 
		}
		else
		{
		   printf("the string is not a palindrome");
		   break;
	    }
	}
}
char fun(int j,node head)
{
	char ch;
	while(j!=0)
	{
		head=head->next;
		j--;
	}
	ch=head->data;
	return ch;
}

