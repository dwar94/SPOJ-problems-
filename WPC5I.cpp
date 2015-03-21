#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<math.h>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	int n,m,t,sqn,sqm;
	long long int res=1;
	map<int,int> mmap,nmap,rmap;
	map<int,int>::iterator it;
	scanint(t);
	while(t--)
	{
		res=1;
		scanint(m);
		scanint(n);
		sqn=(int)pow(n,0.5);
		sqm=(int)pow(m,0.5);
		for(int i=2;i<sqn;i++)
		{
			while(n%i==0)
			{
				nmap[i]++;
				n/=i;
			}
		}
		if(n>1)
		  nmap[n]++;
		for(int i=2;i<sqm;i++)
		{
			while(m%i==0)
			{
				mmap[i]++;
				m/=i;
			}
		}
		if(m>1)
		  mmap[m]++;
	    for(it=nmap.begin();it!=nmap.end();it++)
		{
			if(it->second>mmap[it->first])
			  rmap[it->first]=it->second;		
		}	  
	    for(it=mmap.begin();it!=mmap.end();it++)
		{
			if(it->second>nmap[it->first] && rmap[it->first]<it->second)
			{
				rmap[it->first]=it->second;
			}
		}
		for(it=rmap.begin();it!=rmap.end();it++)
		{
			if(it->first>0)
			{
				res*=pow(it->first,it->second);
			}
		}			
		printf("%lld\n",res);
		nmap.clear();
		mmap.clear();
		rmap.clear();
	}
	
	
	return 0;
}


