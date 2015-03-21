#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,temp,ans;
	scanf("%d",&t);
	vector<int> v;
	while(t--)
	{
		ans=0;
		scanf("%d",&n);
		int visited[n];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&temp);
			v.push_back(temp);			
			visited[i]=0;
		}
	
        sort(v.begin(),v.end());
        int right=n-1,valid=0;   
        for(int i=n-1;i>=0;i--)
        {
        	if(visited[i])
        	 continue;
        	 valid=0;
        	for(int j=right;j>=0;j--)
			{
				if(visited[j]==1)
				  continue;
				  
				if(v[j]<v[i]/2)
				{
					right=j;
					valid=1;
					break;
				}  
				else if(v[j]==v[i]/2)
				{
					ans++;
					visited[j]=1;
					right=j;
					valid=1;
					break;
				}
		    }
			if(valid==0)
			  break; 
			v.clear();  
        }
        printf("%d\n",ans);
        
	}
	return 0;
}
