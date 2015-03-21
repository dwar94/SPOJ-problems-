#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	int T,n,c,a,b,i;
	cin>>T;
	while(T--)
	{
		cin>>n>>c;
		int v[n+1][n+1],visit[n+1],fla=0;
		list<int> q;
		for(i=1;i<=c;i++)
		{
			cin>>a>>b;
			v[a][b]=1;
			v[b][a]=1;
		}
		for(i=1;i<=n;i++)
		{
			visit[i]=0;
		}
		i=1;
		visit[a]=1;
		q.push_back(a); 
		while(!q.empty())
		{
			a=q.front();
			q.pop_front();
			for(int i=1;i<=n;i++)
			  if(v[a][i]==1&&visit[i]==0)
			   {
			    visit[i]=1;
			    q.push_back(i);
		       }
		}
	    for(int i=1;i<=n;i++)
	    {
	    	if(visit[i]==0)
	    	{ 
			 cout<<"Fail\n"<<i<<"\n";
			 fla=1;
			 break;
		    }
	    }
	    if(fla==0)
	     cout<<"True\n";
	}
	return 0;	
}
