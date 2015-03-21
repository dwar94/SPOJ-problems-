#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	static int a[26];
	for(int i=0;i<str.length();i++)
	{
		a[str[i]-65]++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]>1)
		{
	      cout<<(char)(65+i)<<" ";		
		}
	}
	return 0;
}
