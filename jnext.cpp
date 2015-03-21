#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
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
	int t,n,temp;
	vector<int> v;
	scanint(t);
	while(t--)
	{
		int cnt=0;
		scanint(n);
		for(int i=0;i<n;i++)
		{
			scanint(temp);
			v.push_back(temp);
		}
		for(int i=n-1;i>0;i--)
		{
			if(v[i]>v[i-1])
			{
              int min=v[i-1],j,jmin;
			  sort(v.begin()+i,v.end());
			  for(j=i;j<n;j++)
			  {
			  	if(v[j]>min)
			  	{  
					jmin=j;
					break;
			    }
			  }
			  temp=v[jmin];
			  v[jmin]=v[i-1];
			  v[i-1]=temp;
			  sort(v.begin()+i,v.end());
			  break;	
			}
			else 
			 { 
			   cnt++;
			   continue;
		     }
		}
		int res=0;
		if(cnt!=n-1)
		{
		 for(int i=0;i<v.size();i++)
		 {
		 	res=(res*10)+v[i];
		 }
	     printf("%d\n",res);
	    }
	    else
	    {
	    	printf("-1\n");
	    }
		v.clear();
	}
	
	return 0;
}


