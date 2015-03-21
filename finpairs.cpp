#include<stdio.h>
#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
map<int,int> m;
int main()
{
	int t,n,temp;
	long long int count,rep;
	scanf("%d",&t);
	while(t--)
	{
		rep=count=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
		    if(m[temp]!=0)
			{
				count+=m[temp];
			} 
			m[temp]++;
		    count++; 
	    }
	    //cout<<rep<<endl;
	    printf("%lld\n",count);
	    m.clear();
   }
	return 0;
}
