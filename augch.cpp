#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n,k,a,cnt=0;
	scanf("%d",&t);
	while(t--)
	{
		cnt=0;
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a%2==0)
			 cnt++; 
	    }
	    if(k==0&&cnt>0)
	       printf("NO\n");
	    else if(k==0&&cnt==0)
           printf("YES\n");		 
		else if(cnt>=k)
		{
			printf("YES\n");
		}
		else
		  printf("NO\n");
	}
	
	
	return 0;
}
