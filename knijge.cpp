#include<stdio.h>
#include<iostream>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,m;
	m=n;
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]==m)
		 m--;
	}
	printf("%d",m);
	return 0; 
}
