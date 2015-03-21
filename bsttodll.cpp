#include<iostream>
#include<stdio.h>
using namespace std;
struct tree
{
	int data;
	struct tree *left,*right;
};
struct tree* getNode(int d)
{
	struct tree* temp;
	temp=new tree;
	temp->left=temp->right=NULL;
	temp->data=d;
	return temp;
}
void manip(struct tree *root,struct tree **head)
{
	if(root==NULL)
	 return;
	static tree *prev=NULL;
	manip(root->left,head);
	if(prev==NULL)
	  *head=root;
	else
	 { 
	  root->left=*head;
	  prev->right=root;
     }
     prev=root;
    manip(root->right,head); 
}
void print(struct tree *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->right;
	}
}
int main()
{
    int i=1;
	struct tree *root=getNode(i++);
    root->left=getNode(i++);
    root->right=getNode(i++);
    root->left->left=getNode(i++);
    root->left->right=getNode(i++);
    root->right->left=getNode(i++);
    root->right->right=getNode(i++);
    root->right->left->right=getNode(i++);
    struct tree *head=NULL;
    manip(root,&head);
    print(head);
    return 0;
}
