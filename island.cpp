#include<stdio.h>
#include<iostream>
#include<limits.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	int t,n,count=0,max,res,j;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		max=INT_MIN;
		res=0;
		scanf("%d",&n);
		int a[n];
		vector<int> visited(n);
		vector<int> temp;
		int cnt[n];
		for(int i=0;i<n;i++)
		{
			visited[i]=0;
			cnt[i]=0;
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			j=i;
			if(!visited[j])
			{
			   while(!visited[j])
			  {
				visited[j]=1;
				cnt[j]-=count;
				cout<<a[j]<<endl;
				
				if(j!=a[j])
				{
				 temp.push_back(a[j]); 
				 if(visited[a[j]])
				  count+=cnt[a[j]];
			    }
			    j=a[j];
				count++;
			  }
			  cnt[i]+=count;
			  for(int k=0;k<temp.size();k++)
			  { 
			   cout<<temp[k]<<" ";
			   if(cnt[temp[k]]<=0)
			    cnt[temp[k]]+=count;
		      }
		      cout<<endl;
			  temp.clear();
			  count=0; 
		    }
		}
		for(int i=0;i<n;i++)
		{
			cout<<cnt[i]<<" ";
			if(max<cnt[i])
			{ 
			 max=cnt[i];
			 res=i;
		    }
		}
		cout<<endl;
		cout<<res<<endl;
     }
}
