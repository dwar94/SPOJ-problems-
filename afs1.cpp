#include<stdio.h>
#include<math.h>
long long int a[1000000];
void sieve()
{
	int i,j;
	j=2;
	for(i=0;i<1000000;i++)
	 a[i]=1;
	for(i=2*j;i<1000000;i=i+j)
	{
		a[i]+=j;
		if(i+j>=1000000)
		{
			j++;
			i=j;
		} 
	}
}
int main()
{
	int t,n,i;
	long long int res=0;
	sieve();
	scanf("%d",&t);
	while(t--)
	{
		res=0;
		scanf("%d",&n);
		for(i=2;i<=n;i++)
		 res+=a[i]; 
		printf("%lld\n",res); 
	}
	return 0;
}
