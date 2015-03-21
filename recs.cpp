#include<stdio.h>
#include<iostream>
using namespace std;
bool recur(int a[],int n,int sum)
{
	if(sum>0&&n==0)
	 return false;
	else if(sum==0)
	 return true;
	if(a[n-1]>sum)
	 return recur(a,n-1,sum);
	return (recur(a,n-1,sum)||recur(a,n-1,sum-a[n-1]));   
}
int main()
{
	int a[10],sum;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cin>>sum;
	cout<<recur(a,9,sum);
	return 0;
}
