#include<stdio.h>
#include<iostream>
using namespace std;
struct tree
{
  int data;
  struct tree *left,*right;
};
struct tree *newnode(int data)
{
	struct tree *node=new tree();
	node->data=data;
	node->left=node->right=NULL;
	return node;
}
int height(struct tree *root)
{
  if(root==NULL)
   return 0;
  return max(height(root->left),height(root->right))+1;
}
int main()
{
	struct tree *root=new tree();
	root=newnode(8);
	root->left=newnode(5);
	root->right=newnode(6);
	root->left->right=newnode(7);
	int lt=height(root->left)+1;
	int rt=height(root->right)+1;
	if((lt-rt)>=1||(lt-rt)<=1)
	    cout<<"not balanced";
  	return 0;
}
