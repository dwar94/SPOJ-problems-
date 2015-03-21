#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string.h>
#include<stdio.h>
#define gc getchar_unlocked
using namespace std;
int dp[8000][4];
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
bool isprime(int a)
{
	if(a==0||a==1)return false;
	else if(a==2)return true;
	for(int i=2;i*i<=a;i++)
	{ 
	 if(a%i==0)
		return false;
	}
	return true;  
	}
}
int pe(int a,int b)
{
    if(a==0||b==1||a==1)return 1;
    if(a<0)return 0;
    if(dp[a][b]!=-1)
    {
    	return dp[a][b];
    }
    int res=0;
    for(int i=1;i<=b;i++)
    {
       res+=pe(a-i,i);	
    }
    dp[a][b]=res;
	return res;
}
int main()
{
    vector<int> v;	
	for(int i=0;i<90;i++)
	 for(int j=0;j<90;j++)
	  if(i<=j)
	    if(isprime(i*i+j*j))
		   v.push_back(i*i+j*j);
	sort(v.begin(),v.end());	   
	int t,n,k,res;
	memset(dp,-1,sizeof(dp));
	scanint(t);
	while(t--)
	{
		scanint(n);
		scanint(k);
		res=pe(v[n-1],k);
		printf("%d\n",res);
	}
}


