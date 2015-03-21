#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
int main()
{
   int n;	
	scanf("%d",&n);
	int lis[n],arr[n],max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		lis[i]=1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j]&&lis[i]<lis[j]+1)
			 lis[i]=lis[j]+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(max<lis[i])
		 max=lis[i];
	}
	printf("%d\n",max);
	return 0;
}
