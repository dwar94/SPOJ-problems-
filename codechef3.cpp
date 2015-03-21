#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
map<char,char> pwd;
int main()
{
	int t,n,i,flag,trail=0;
	char rep,org;
	string str,res="";
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		trail=0;
		scanf("%d",&n);
		while(n--)
		{
			cin>>org;
			cin>>rep;
			pwd[org]=rep;
		}
		cin>>str;
		for(i=0;i<str.length();i++)
		{
	       if(pwd[str[i]]!=NULL)
	       {
             str[i]=pwd[str[i]];	       	
	       }
		}
		for(i=0;i<str.length();i++)
		{
			if(str[i]=='0'&&flag==0)
			{
				continue;
			}
			else if(flag==1)
			{
				res+=str[i];
				flag=1;
			}
		}
		flag=0;
		for(i=res.length()-1;i>=0;i++)
		{
			if(res[i]=='0'&&flag==0)
			{
			 	trail++;
			}
			else if(res[i]!='.'&&flag==0)
			  trail++;
			else
			  break;  
		}
		for(i=0;i<res.length()-trail;i++)
		{
			cout<<res[i];
		}
		cout<<endl;
		
	}
	return 0;
}
