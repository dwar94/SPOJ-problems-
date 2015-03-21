#include<iostream>
#include<stdio.h>
#include<vector>
#include<climits>
#include<string.h>
//#define gc getchar_unlocked
using namespace std;
int dp[101][101],ncolor[101][101],colors[101];
/*void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}*/
int recur(int start,int end)
{
	int &ret=dp[start][end];
	if(ret!=-1)
	 return ret;
	if(start+1==end)
	{
		ncolor[start][end]=(colors[start]+colors[end])%100;
		return ret=colors[start]*colors[end];
	}
	else if(s==e)
	{
		ncolor[start][end]=colors[start];
		return ret=0;
	}
	ret=INT_MAX;
	for(int i=start;i<end;i++)
	{
		recur(start,i);
		recur(i+1,end);
		if(recur(start,i)+recur(i+1,end)+(ncolor[start][i]*ncolor[i+1][end])<ret)
		{
			ncolor[start][end]=(ncolor[start][i]+ncolor[i+1][end])%100;
			ret=recur(start,i)+recur(i+1,end)+ncolor[start][i]*ncolor[i+1][end];
		}
	}
	return ret;
}
int main()
{
	int n;
	while(scanf("%d",&n)==1)
	{
		int temp;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&colors[i]);
		}
		memset(dp,-1,sizeof(dp));
		printf("%d\n",recur(0,n-1));
	}
	
	return 0;
	
}
