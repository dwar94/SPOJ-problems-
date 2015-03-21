#include<iostream>
#include<stdio.h>
#include<cmath>
int main()
{
	int t,flag,k;
	long long n,i,j,sum,sum1;
	double d1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		i=2;
		flag=0;
		while(1)
		{
			sum=sum1=1;
			d1=pow(n,(double)(1.0/(double)i));
			printf("d1: %f\n",d1);
			if(d1<2)
				break;
			j=(long long)d1+1;
			for(k=0;k<i;k++)
			{
				sum*=j;
			}
			
			if(sum==n)
			{
				flag=1;
				break;
			}
			else
			{
				j=j-1;
				for(k=0;k<i;k++)
				{
					sum1*=j;
				}
				if(sum1==n)
				{
					flag=1;
					break;
				}
			}
			i++;
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
} 
