#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,int> m;
int bit[30001];
int query(int idx)
{
	int res=0;
	while(idx>0)
	{
		res+=bit[idx];
		idx-=(idx&-idx);
	}
	return res;
}
void update(int idx,int val)
{
	while(idx<=30000)
	{
		bit[idx]+=val;
		idx+=(idx&-idx);
	}
}

int main()
{
	int t,n;
	long long int count=0; 
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		string temp;
		int a[n];
		for(int i=1;i<=n;i++)
		{
			cin>>temp;
			m[temp]=i;
		}
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			a[i]=m[temp];
		}
		for(int i=0;i<n;i++)
		{
			update(a[i],1);
			count+=query(30000)-query(a[i]);
		}
		printf("%lld\n",count);
		for(int i=0;i<=30000;i++)
		{
			bit[i]=0;
		}
		m.clear();
	}
	return 0;
}
