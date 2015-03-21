#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,n;
	long long int avg;
	scanf("%d",&t);
	while(t--)
	{
		avg=0;
		scanf("%d",&n);
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			avg=(avg+a[i])%n;
		}
		if(avg%n==0)
		 printf("YES\n");
		else
		 printf("NO\n"); 
	}
	
	
	
	return 0;
}
