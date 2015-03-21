#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t,b,f,temp,sum,i,cnt;
	scanf("%d",&t);
	vector<int> v;
	for(int j=0;j<t;j++)
	{
	    sum=cnt=0;
		scanf("%d%d",&b,&f);
		for(i=0;i<f;i++)
		{
			 scanf("%d",&temp);
			 v.push_back(temp);
		}
		sort(v.begin(),v.end());
	    for(i=v.size()-1;i>=0;i--)
		{ 
		  sum+=v[i];
		  cnt++;
		  if(sum>=b)
		    break;
		  	   
		}
		printf("Scenario #%d:\n",j+1);
		if(i==-1&&sum<b)
		  printf("impossible\n");
		else  
		  printf("%d\n",cnt);
		v.clear();  
	}
	
	
	return 0;
}
