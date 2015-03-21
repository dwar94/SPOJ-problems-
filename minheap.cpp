#include<iostream>
#include<stdio.h>
using namespace std;
void min_heapify(int *a,int i,int n)
{
	int parent=a[i];
	int child=2*i;
	while(child<=n)
	{
		if(child<n&&a[child+1]<a[child])
		 child++;
		if(parent<a[child]) 
		 break;
		else if(parent>=a[child]) 
		{
			a[child/2]=a[child];
			child=2*child;
		} 
	}
	a[child/2]=parent;
	return;
}
void buildminheap(int *a,int n)
{
	for(int i=n/2;i>=1;i--)
	{
		min_heapify(a,i,n);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	buildminheap(a,n);
	for(int i=1;i<=n;i++)
	   printf("%d ",a[i]);
	return 0;   
}

