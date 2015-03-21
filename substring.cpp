#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int count=0,t;
	bool a,b,c;
	scanf("%d",&t);
	while(t--)
	{
     count=0;
     a=b=c=false;
	 string str;
	 cin>>str;
	 for(int i=0;i<str.size();i++)
	 {
		for(int j=i;j<str.size();j++)
		{
			if(str[j]=='a')
			
			 a=true;
			else if(str[j]=='b')
			 b=true;
			else if(str[j]=='c')  
			 c=true;
			if(a&b&c) 
			{
				a=b=c=false;
			    //cout<<"j-1:"<<j-i<<endl;	
				count+=j-i;
				break;
			}
			else if(j==str.size()-1)
			{
				count+=j-i+1;
			}
		}
	 }
	 cout<<count<<endl;
	} 
	
}

