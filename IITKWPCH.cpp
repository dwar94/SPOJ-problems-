#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#define gc getchar_unlocked
using namespace std;
/*void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}*/
int main()
{
	int t;
	string str;
	//scanint(t);
	cin>>t;
	while(t--)
	{
		int n;
		//scanint(n);
		cin>>t;
		int count[10],check[10],res=0;
		for(int i=0;i<10;i++)
		{
			count[i]=check[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			cin>>str;
			for(int j=0;j<str.size();j++)
			{
				if(check[str[j]-48]==0)
				{
				 count[str[j]-48]++;
				 check[str[j]-48]++;
			    }
			    else
			     continue;
			}
			memset(check,0,10);
		}
		for(int k=0;k<n;k++)
		{
		   if(count[k]>1)	
		    res+=(count[k]*(count[k]-1))/2;
		}
		printf("%d\n",res);
	}
	
	return 0;
}


