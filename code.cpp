#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,n;
	long long k,ans,a[1000],i,p,q,r;
	char op[3];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%lld%lld",&n,&k,&ans);
		scanf("%d",&a[0]);
		p=q=r=a[0];
		for(i=1;i<n;i++)
		{ 
		 scanf("%lld",&a[i]);
		 p=p^a[i];
		 q=q|a[i];
		 r=r&a[i];
	    }
		scanf("%s",op);
		if(op[0]=='X')
		{
		    for(i=0;i<k;i++)
		      ans^=p;
		} 
		else if(op[0]=='A')
		{
			 for(i=0;i<k;i++)
			   ans&=r;
		}
		else
		{
			for(i=0;i<k;i++)
			  ans|=q;
		}
		printf("%lld\n",ans);
	}
}
