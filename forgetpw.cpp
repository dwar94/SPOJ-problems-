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
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,flag=0,trail=0;
		char temp,n2;
		string str,res="",res1="";
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
		  	cin>>temp;
		  	cin>>n2;
		  	pwd[temp]=n2;
		  	//cout<<"temp:"<<temp-33<<endl;
		  	//cout<<"value:"<<n2-33<<endl;
		}
		cin>>str;
		//cout<<"str:"<<str;
		for(int i=0;i<str.length();i++)
		{
				if(pwd[str[i]]!=NULL)
				  res+=pwd[str[i]];
				else
				  res+=str[i];  
			}	
		}
		for(int i=0;i<res.length();i++)
		{
			if(res[i]==0&&flag=0)
			 continue;
			else
			{
				flag=1;
				res1+=res[i]; 
			}
		}
		for(int i=res1.length()-1;i>=0;i++)
		{
			if(res1[i]=='0')
			  trail++;
			else if(res1[i]=='.')
			  trail++;
			else
			{
			  break;
			}    
		}#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
map<char,char> pwd;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,flag=0,trail=0;
		char temp,n2;
		string str,res="",res1="";
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
		  	cin>>temp;
		  	cin>>n2;
		  	pwd[temp]=n2;
		  	//cout<<"temp:"<<temp-33<<endl;
		  	//cout<<"value:"<<n2-33<<endl;
		}
		cin>>str;
		//cout<<"str:"<<str;
		for(int i=0;i<str.length();i++)
		{
				if(pwd[str[i]]!=NULL)
				  res+=pwd[str[i]];
				else
				  res+=str[i];  
		}
		for(int i=0;i<res.length();i++)
		{
			if(res[i]=='0'&&flag==0)
			 continue;
			else
			{
				flag=1;
				res1+=res[i]; 
			}
		}
		//cout<<"res1:"<<res1<<endl;
		for(int i=res1.length()-1;i>=0;i--)
		{
			if(res1[i]=='0')
			  trail++;
			else if(res1[i]=='.')
			{  
			  trail++;
			  break;
			} 
			else
			{
			  break;
			}    
		}
		//cout<<"trail:"<<trail<<endl;
		for(int i=0;i<trail;i++)
		{
			res1.pop_back();
		}
		if(res1=="")
		 res1+='0';
		cout<<res1<<endl;
		pwd.clear();
	}
	return 0;
}
		for(int i=0;i<trail;i++)
		{
			res1.pop_back();
		}
		cout<<res1<<endl;
		map.clear();
	}
	return 0;
}
