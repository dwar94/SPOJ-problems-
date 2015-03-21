#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,n,temp;
	long long int res=0;
	scanf("%d",&t);
	while(t--)
	{
		res=0;
		scanf("%d",&n);
		long long int a[n];
		int i,j;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		i=0;j=n-1;
		if(n%2==0)
		  temp=-1;
		else
		  temp=0;  
		 while(j-i!=temp)
		 {
		  res+=(n-(2*i+1))*(a[j]-a[i]);
		  i++;
		  j--;
		 }
		 printf("%lld\n",res);
	}
	
	return 0;
}
