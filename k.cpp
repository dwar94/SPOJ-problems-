#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,i;
	long long int res=0;
	scanf("%d",&t);
	while(t--)
	{
		res=0;
		scanf("%d",&n);
		for(i=1;i<=n/2;i++)
		{
			res+=((n/i)-1)*i;
		}
		printf("%lld\n",res);
	}
}
