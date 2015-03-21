#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;
struct tree
{
	int data;
	struct tree *left,*right;
};  
int arr[10],j=0;

void manip(tree *h,int k)
{
	//cout<<h->data<<endl;
	if(h->left==NULL&&h->right==NULL)
	{
		cout<<arr[j-k]<<" ";
		return;
	}
	else 
	{
		//arr[j++]=h->data;
		//cout<<h->data<<"\n";
		if(h->left!=NULL){
		  arr[j++]=h->data;
		  manip(h->left,k);
		  j--;
	     }
		if(h->right!=NULL)  
		{
		  arr[j++]=h->data;  
		  //cout<<h->right->data<<"\n";
		  manip(h->right,k);
		  j--;
		}
		 return; 
	}
}

void inorder(struct tree* h)
{
	if(h!=NULL)
	{
		inorder(h->left);
		cout<<h->data<<" ";
		inorder(h->right);
	}
}
void postorder(struct tree* h)
{
	if(h!=NULL)
	{ 
	 postorder(h->left);
	 postorder(h->right);
	 cout<<h->data<<" ";
     }
}
void preorder(struct tree* h)
{
	if(h!=NULL)
	{
		cout<<h->data<<" ";
		preorder(h->left);
		preorder(h->right);
	}
}

struct tree* getNode(int d)
{
	struct tree* temp;
	temp=new tree;
	temp->left=temp->right=NULL;
	temp->data=d;
	return temp;
}
int main()
{
    struct tree *root=getNode(1);
    int i=2,k;
    cin>>k;
    //root->data=i++;
    //cout<<root->data<<"\n";
    root->left=getNode(i++);
    root->right=getNode(i++);
    root->left->left=getNode(i++);
    root->left->right=getNode(i++);
    root->right->left=getNode(i++);
    root->right->right=getNode(i++);
    root->right->left->right=getNode(i++);
    cout<<"\n----------------------------------------------------\n";
    inorder(root);
    cout<<"\n----------------------------------------------------\n";
    cout<<"\n----------------------------------------------------\n";
    postorder(root);
    cout<<"\n----------------------------------------------------\n";
    cout<<"\n----------------------------------------------------\n";
    preorder(root);
    cout<<"\n----------------------------------------------------\n";
    manip(root,k);
	return 0;
}
