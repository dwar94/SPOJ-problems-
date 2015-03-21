#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
map<int,int> m;
int main()
{
	map<int,int>::iterator it;
	int t,n,check=0,res=0;
	scanf("%d",&t);
	while(t--)
	{
		int temp;
		check=res=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
            scanf("%d",&temp); 		
	    	m[temp]++;
	    }
	    for(it=m.begin();it!=m.end();it++)
	    {
		if(m[it->first]>(n/2))
		{
			check=1;
			res=it->first;
			break;
		}
	   }
	if(check==1)
	{
		printf("YES %d\n",res);
	}
	else
	 printf("NO\n");
	 m.clear();
   }
	return 0;
}
