#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n,x=0;
	long long int mod,res;
	scanf("%d",&t);
	while(t--)
	{
		res=0;
		scanf("%d",&n);
		long long int *bit=(long long *)calloc(1026,sizeof(long long int));
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&mod);
			while(mod)
			{
			 x=x|(1<<mod%10);
			 mod=mod/10;	
			}
			bit[x]++;
			x=0;
		}
		for(int i=1;i<1024;i++)
		 for(int j=1;j<1024;j++)
		 {
		 	if(i!=j&&(i&j))
		 	 res+=bit[i]*bit[j];
		 }
		for(int i=1;i<1024;i++) 
		 res+=bit[i]*(bit[i]-1);
		printf("%lld\n",res/2); 
	}
}


