#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct tree{
	int data;
	struct tree *l,*r;
};
struct tree* newNode(int d)
{
	struct tree* node=(struct tree*)malloc(sizeof(struct tree));
	node->data=d;
	node->l=node->r=NULL;
	return (node);
}
int sumutil(struct tree *root,int v)
{
	if(root==NULL)
	 return 0;
	v=(v*10)+root->data;
	if((root->l==NULL)&&(root->r==NULL))
	 return v;
	return sumutil(root->l,v)+sumutil(root->r,v);  
}
int main()
{
    struct tree *root=newNode(6);
    root->l=newNode(5);
    root->r=newNode(4);
    root->l->l=newNode(3);
    root->l->r=newNode(2);
    root->l->r->l=newNode(5);
    root->l->r->r=newNode(7);
    root->r->r=newNode(8);
    cout<<sumutil(root,0);
    return 0;
}
