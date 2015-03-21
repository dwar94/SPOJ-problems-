#include<stdio.h>
long long int fi(long long int n)
{
	long long int res=n,i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		 res-=res/i;
		while(n%i==0)
		 n/=i; 
	}
	if(n>1)
	 res-=res/n;
	return res; 
}
int main()
{
	int t;
	long long int n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==1)
		 printf("0");
		else
		{ 
		for(i=n/2;i>=1;i--)
		{
			if(fi(n*i)==fi(n)*fi(i))
			 {
			   printf("%lld\n",i);
		       break;
	         }
	    }
	    }
    }
    return 0;
}
