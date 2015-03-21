#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,n;
	bool flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=true;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>i)
			  flag=false;
		}
		
		if(flag)
		   printf("YES\n");
		else
		   printf("NO\n");   
	}
	return 0;
}
