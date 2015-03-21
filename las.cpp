#include<stdio.h>
#include<iostream>
using  namespace std;
int sieve(int n)
{
	int count=1,i,j=3;
	while(j<=n)
	{
		for(i=2;i<n;i++)
		{
			if(j%i==0)
			 count+=i;
		}
		j++;
	}
	return count;
   
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=sieve(n);
	printf("%d",res);
	return 0;
}
