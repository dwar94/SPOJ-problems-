#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
int read(int *tree,int a)
{
	int ret=0;
	for(int i=a;i>0;i-=i&(-i))
	{
		ret+=tree[i];
	}
	return ret;
}
int main()
{
	int n,t,b,c,max=INT_MIN;
	cin>>n;
	int a[n+1],i,tree[n+1];
	for(i=1;i<=n;i++)
	{	
		cin>>a[i];
		tree[i]=0;
    }
	for(int j=1;j<=n;j++)
	{
		i=j;
		//i+=i&(-i);
		while(i<=n)
		{
			if(a[j]<=max+tree[i])
			{
			  tree[i]=a[j]+tree[i];
			  max=tree[i];
		    }
			else
			{
				tree[i]=a[j];
				max=tree[i];
				cout<<max<<endl;
			}
		    i+=i&(-i);
		 } 
	}
	for(int j=1;j<=n;j++)
	  cout<<tree[j]<<" ";
	cout<<endl;  
	cin>>t;
	while(t--)
	{
		cin>>b>>c;
		cout<<read(tree,c)-read(tree,b-1);
	}
	 	
	
	return 0;
}
