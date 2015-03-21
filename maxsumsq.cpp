#include<stdio.h>
#include<limits.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],max,sum=0,mn=0,i;
		long long cnt=1,rep=0;
		max=INT_MIN;
		for(i=0;i<n;i++)
		{ 
		 scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	     sum+=a[i];
		 if(sum-mn>max)
		 {
		 	max=sum-mn;
		 	rep=cnt;
		 }
		 else if(sum-mn==max)
		  rep+=cnt;	
		 if(sum<mn)
		 {
		   mn=sum;
		   cnt=1;
	     }
	     else if(sum==mn)
	      cnt++;
	    }
	    printf("%d %lld\n",max,rep);
    }
    return 0;
}
