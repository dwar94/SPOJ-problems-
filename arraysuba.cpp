#include<stdio.h>
#include<iostream>
int main()
{
	int n,i,k,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n-k+1;i++)
	for(j=i+1;j<i+k;j++)
	{
		if(a[j]>a[i])
		 a[i]=a[j];
		 
	}
	for(i=0;i<n-k+1;i++)
	 printf("%d ",a[i]);
    return 0;		 
}
