#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp,l,r;
	int temp;
	cin>>inp;
	for(int i=1;i<inp.size();i++)
	{    
		if(inp[i-1]<=inp[i])
		{
			l+=inp[i-1];
		}
		else
		{	 
		   l+=inp[i-1];
		   while(i<inp.size())
		   { 
			 r+=inp[i];
		     i++;
	       }
	       break;	  
		}
	}
	 cout<<l<<endl;
	 cout<<r<<endl;
	
	return 0;
}
