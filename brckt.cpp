#include<stdio.h>
#include<iostream>
using namespace std;
int bit[30001];
int query(int idx)
{
	int ret=0;
	for(int i=idx;i>0;i-=i&(-i))
	{
		ret+=bit[idx];
	}
}
void update(int idx,int val)
{
	for(int i=idx;i<30001;i+=i&(-i))
	{
		bit[i]+=val;
	}
}
void updte(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		 update(i,1);
		else if(s[i]==')')
		 update(i,-1); 
	}
	cout<<"string update over:\n";
}
int main()
{
	int n,q,ty;
	string s;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&n);
		cin>>s;	
		updte(s);
		printf("Test %d:\n",i);
		scanf("%d",&q);
		for(int j=0;j<q;j++)
		{
		   scanf("%d",&ty);
		   if(ty==0)
		   {
		   	 if(query(30000)==0)
		   	  printf("YES\n");
		   	 else
		      printf("NO\n");		  
		   }
		   else 
		   {
		   	if(s[ty-1]=='(')
		   	 update(ty,-2);
		   	else
			 update(ty,2);    
		   }
		}
	}
}
