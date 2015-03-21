#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	map<string,int> hash;
	string str;
	scanf("%d",&t);
	cin.ignore(1,'\n');
	while(t--)
	{
	    getline(cin,str);
	    for(int i=0;i<str.size();i++)
	    {
	    	if((str[i]!=' ')&&(i<str.size()))
	    	{
	    		temp+=str[i];
	    	}
	    	else
	    	{
			 if(hash[spl]==0)
			 {  
			  hash[spl]++;
			  res++;
		     }
		    }
		}
		printf("%d\n",res);
		res=0;
		hash.clear();
	}	
	return 0;
}


