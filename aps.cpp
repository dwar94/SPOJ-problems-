#include<stdio.h>
#include<math.h>
long long int sieve(int n)
{
	int i,j;
	long long int count=0;
	j=2;
	while(j<=n)
	{
	 if(j%2==0)
	  count+=2;
	 else if(sqrt(j)>=3)
	 { 
	  for(i=3;i<=sqrt(j);i++)
	 {
	 	if(j%i==0)
	 	{
	 		count+=i;
	 		break;
	 	}
	 	else if(j%i!=0&&i==sqrt(j))
	 	  count+=j;
	 }
	 
     }
     else
      count+=j;
     
     j++;
    }
    return count;
}
int main()
{
	int n,t;
	long long int res;
	scanf("%d",&t);
	while(t--)
	{
	 scanf("%d",&n);
	 res=sieve(n);
	 printf("%lld\n",res);
    }
	return 0;
}
