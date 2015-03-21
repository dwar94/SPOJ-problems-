#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair<int,int>sf;
vector<sf> jobs;
int main()
{
  int n,i,j,count,t;
  scanf("%d",&t);
  while(t--)
  {
	scanf("%d",&n);
	int s,f;
	for(i=0;i<n;i++)
	{
		 scanf("%d%d",&s,&f);
		 jobs.push_back(sf(f,s));
    }
	sort(jobs.begin(),jobs.end());
	count=1;
	j=0;
	for(i=1;i<n;i++)
	{
		if(jobs[i].second>=jobs[j].first)
		{ 
		  count++;
		  j=i;
	    }
	}
	printf("%d\n",count);
	jobs.clear();
  }
	return 0;
}

