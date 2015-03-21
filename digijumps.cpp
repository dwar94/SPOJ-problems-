#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<limits.h>
using namespace std;
vector<vector<int> > v(10);
string str;
int min(int a,int b)
{
	return a<b?a:b;
}
int minim(int i)
{
	int m=0,t=INT_MAX;
	cout<<"venkat\n";
	for(int j=0;j<v[i].size();j++)
	{
       		   cout<<"teja\n";
			   t=min(t,minim(v[i][j])+1);
       		
	}
	if(i==0)
	{
		cout<<"manoj\n";
		m=minim(i+1)+1;
		return min(m,t);
		
	}
	else if(i==str.length()-1)
	{
		cout<<"dwar\n";
		return 0;
	}
	 
	else
	{
		cout<<"suba\n";
		m=min(minim(i-1),minim(i+1))+1;
		return min(m,t);
	}
}
int main()
{
	int res;
	cin>>str;
	for(int i=0;i<10;i++)
	{
	  for(int j=0;j<str.length();j++)
	  {
	   cout<<(int)(str[j]-'0')<<endl;	
	   if((int)(str[j]-'0')==i)
	   {
	   	cout<<"sankar\n";
	   	v[i].push_back(j);
	   }
      }
	}
	res=minim(0);
	cout<<res<<endl;
	return 0;
}

