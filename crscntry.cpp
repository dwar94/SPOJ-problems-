#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<limits.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int LCS(int agn[],int a,int tom[],int b)
{
	int lc[a+1][b+1];
	for(int i=0;i<=a;i++)
	{
		lc[i][0]=0;
	}
	for(int i=0;i<=b;i++)
	{
		lc[0][i]=0;
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(agn[i-1]==tom[j-1])
			 lc[i][j]=lc[i-1][j-1]+1;
			else
			 lc[i][j]=max(lc[i-1][j],lc[i][j-1]) ;
		}
	}
	return lc[a][b];
}

int main()
{
	int t,agn[2001],tom[2001];
	scanf("%d",&t);
	while(t--)
	{
		int temp=1,i=0,j,res=INT_MIN;
		while(temp)
		{
			scanf("%d",&temp);
			agn[i++]=temp;
		}
		while(true)
		{
			scanf("%d",&temp);
			if(temp==0)
			 break;
			tom[0]=temp;
			j=1;
			while(temp)
			{
				scanf("%d",&temp);
				tom[j++]=temp;
			}
			 res=max(res,LCS(agn,i-1,tom,j-1));
			 
		}
		printf("%d\n",res);
		
	}
	
}


