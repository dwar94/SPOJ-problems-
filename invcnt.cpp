#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
int bit[10000000];
int query(int idx)
{
	int result=0;
	while(idx>0)
	{
		result+=bit[idx];
		idx-=(idx&-idx);
	}
	return result;
}
void update(int idx,int val)
{
	while(idx<=10000000)
	{
		//cout<<"idx:"<<idx<<endl;
		//cout<<"bit["<<idx<<"]="<<bit[idx]+val<<endl;
		bit[idx]+=val;
		idx+=(idx&-idx);
	}
}
int main()
{
	int t,n,e;
	long long int count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
		 scanf("%d",&e);
		 update(e,1);
		 count+=query(10000000)-query(e);
	    }
	    printf("%lld\n",count);
		for(int i=1;i<=10000000;i++)
		  bit[i]=0;
		
	}
return 0;
}
