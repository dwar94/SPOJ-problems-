#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	int i,ind;
	long long left=0,right=0;
	cin>>str;
	for(i=0;i<str.size();i++)
	{
		if(str[i]=='^')
		{
			ind=i;
			break;
	    }
	}
	for(i=ind+1;i<str.size();i++)
	{
		if(str[i]!='=')
		{
			right+=(str[i]-'0')*(i-ind);
		}
	}
	for(i=ind-1;i>=0;i--)
	{
		if(str[i]!='=')
		 left+=(str[i]-'0')*(ind-i);
	}
	if(left>right)
	 cout<<"left";
	else if(right>left)
	 cout<<"right";
	else
	 cout<<"balance";
	return 0;   
}
