#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,temp,sum;
	bool flag=false;
	scanf("%d",&t);
	while(t--)
	{
		flag=false;
		sum=0;
		scanf("%d",&n);
		int cnt[n];
		for(int i=0;i<n;i++)
		 cnt[i]=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			if(temp<n)
			  cnt[temp]++;
			else
			  flag=true;
		}
		if(flag)
		  printf("NO\n");
		else
		{
			flag=true;
			if(n%2!=0)
			{
			  if(cnt[n/2]==1)
			  {	
			   for(int i=1;i<n/2;i++)
			   {
			      	   if(cnt[i]+cnt[n-1-i]==2)
			      	     continue;
			      	   else
			      	   {
			      	   		  flag=false;
			      	   }
					
			   }
		      }
			}
			else
			{
				for(int i=1;i<=n/2;i++)
			   {
			      	   if(cnt[i]+cnt[n-1-i]==2)
			      	     continue;
			      	   else
			      	   {
			   
			      	   		  flag=false;
			      	   }
					
			   }
			   
			}
			if(flag)
			      printf("YES\n");
			else
			     printf("NO\n")      ;
		}  
		
	}
}
