#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<limits.h>
using namespace std;
int main()
{
	int n,temp,max=INT_MIN,cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		if(temp!=0)
		 cnt++;
		else
		 {
		  if(max<cnt)	
		   max=cnt;
		  cnt=0; 
	     }
	}
	if(max==INT_MIN)
	 max=cnt;
	printf("%d\n",max);
	
	
	return 0;
}


