#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<limits.h>
using namespace std;
int main()
{
	string str;
	//cin>>str;
	int cnt=0,res=INT_MAX;
	while((cin>>str)!=0)
	{
		res=INT_MAX;
		for(int i=0;i<str.length();i++)
		 {
		 	cnt=0;
		 	for(int j=0;j<i;j++)
		 	   { 
				 if(str[j]=='G')
		 	      cnt++;
		       }
		 	for(int j=i+1;j<str.length();j++)      
		 	  {
		 	  	if(str[j]=='R')
		 	  	  cnt++;
		 	  }
		 	if(res>cnt)
			  res=cnt; 
		 }
		 printf("%d\n",res);
	//	 cin>>str;
		 
	}
}


