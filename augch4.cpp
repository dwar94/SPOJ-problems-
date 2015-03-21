#include<stdio.h>
#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;
map<int,int> count;
int main()
{
	int t,n,m,c,res,temp;
	scanf("%d",&t);
	vector<int> o;
	while(t--)
	{
		res=0;
		scanf("%d%d",&n,&m);
		scanf("%d",&c);
		o.push_back(c);
		temp=c;
		for(int i=1;i<m;i++)
		{
			scanf("%d",&c);
			if(temp!=c)
			 o.push_back(c);
			temp=c; 
			count[c]++;
		}
		for(int i=0;i<o.size();i++)
		{
			if(count[o[i]]==o.size()-1)
			{
			   res++;
			   break;	
			}
			else
			{
				
			}   
		}
	}
	
	
	
}
