#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair<int,int>sf;
vector<sf> jobs;
int main()
{
  int n,i,j,count,s,f,k;
  scanf("%d",&n);
  while(n>=0)
  {
	for(i=0;i<n;i++)
	{
		 scanf("%d%d",&s,&f);
		 jobs.push_back(sf(f,s));
    }
	sort(jobs.begin(),jobs.end());
	for(i=0;i<n;i++)
	 printf("%d %d\n",jobs[i].second,jobs[i].first);
	count=n+1;
	for(k=0;k<n;k++)
	{
	 j=k;
	 for(i=k+1;i<n;i++)
	 {
		if(jobs[i].second>=jobs[j].first)
		{ 
		  count++;
	    }
	 }
    }
	printf("%d\n",count);
	jobs.clear();
	scanf("%d",&n);
  }
	return 0;
}

