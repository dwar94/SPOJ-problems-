#include<iostream>
#include<stdio.h>
#include<string.h>
//#define gc getchar_unlocked
using namespace std;
int bit[1000000000];
/*void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}*/
void update(int idx,int x)
{
	while(idx<=100000000)
	{
		bit[idx]+=1;
		idx+=(idx&-idx);
	}
}
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
int main()
{
	int n,l,b,c,q;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&q);	
	for(int i=0;i<q;i++)
	{
		int res=0;
		scanf("%d",&l);
		scanf("%d",&b);
		scanf("%d",&c);
		for(int i=l;i<b;i++)
		{
			update(a[l],1);
		}
		res=query(1000000)-query(c); 
		memset(bit,0,sizeof(bit));
		printf("%d\n",res);
	}
	
}
