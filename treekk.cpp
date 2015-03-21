#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct tree
{
	int data;
	struct tree *left,*right;
};
bool freet=false;
struct tree* newNode(int data)
{
	struct tree* temp=new tree();
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void remov(struct tree *root,int sum,int csum)
{
	printf("root:%d\n",root->data);
	csum+=root->data;
	if(root->left==NULL&&root->right==NULL)
	{
	 if(csum<sum)	
	 { 
	  freet=true;
	  return ;
     }
     else if(csum>=sum)
	  return;
    }
    //printf("csum=%d\n",csum);
    if(root->left!=NULL)
    remov(root->left,sum,csum);
	if(freet)
	{
		freet=false;
		root->left=NULL;
	}   
    if(root->right!=NULL)
    remov(root->right,sum,csum);
    if(freet)
    {
    	freet=false;
    	root->right=NULL;
    }
    //return;
}
void inorder(struct tree *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
int main()
{
  	struct tree *root=newNode(1);
  	root->left=newNode(2);
  	root->right=newNode(3);
  	root->left->left=newNode(4);
  	root->left->right=newNode(5);
  	root->left->left->left=newNode(8);
	root->left->left->right=newNode(9);
	root->left->left->right->left=newNode(13);
	root->left->left->right->right=newNode(14);
	root->left->left->right->right->left=newNode(15);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	root->right->right->left=newNode(10);
	root->right->right->left->right=newNode(11);
	cout<<"chumma\n";
	inorder(root);
	remov(root,20,0);
	inorder(root);
}
