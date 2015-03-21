#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	long long int z,n,m,count,i,min,max;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%lld%lld%lld",&z,&n,&m);
		min=n<m?n:m;
		max=n>m?n:m;
		for(i=1;i<=sqrt(z);i++)
		{
			if(i<=min&&z%i==0)
			{
				if(z/i<=max&&z/i<=min)
				{ 
				  count+=((z/i)==i)?1:2;
			    }
				else if(z/i<=max&&z/i>min)
				  count+=1;  
			}
		}
		printf("%lld\n",count);
	}
	
}
