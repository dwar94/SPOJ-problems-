#include<iostream>
#include<stdio.h>
using namespace std;
int dp[6];
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int ar[]={15,10,-50,50,35};
	dp[0]=0;
	dp[1]=ar[0];
	dp[2]=max(ar[0],ar[1]);
	for(int i=3;i<=5;i++)
	{
	   dp[i]=max(ar[i-1]+dp[i-2],max(dp[i-1],ar[i-1]));
	}
	cout<<dp[5]<<endl;
	
	return 0;
}
