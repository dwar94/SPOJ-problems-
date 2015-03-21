#include<stdio.h>
#include<iostream>
using namespace std;
int bit[3000]={0};
int query(int a,int b)
{
	int ret=0;
	for(int x=b;x>a;x-=x&(-x))
	{
		ret+=bit[x];
	}
	return ret;
}
int update(int a,int b)
{
  for(int i=a;i<b;i+=i&(-i))
  {
  	bit[i]+=5;
  }
}
int main()
{
	int a,b,c,res=0,t;
	cin>>t;
	while(t--)
	{
	cin>>a>>b>>c;
	if(a==0)
	{ 
	 res=query(b,c);
	 update(b,c);
    }
	else 
	 update(b,c);
	cout<<res<<"\n"; 
    }
	return 0;
}
