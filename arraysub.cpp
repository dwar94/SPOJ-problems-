#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,k,count=1;
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=1;i<n;i++)
	{
		if(count<k)
		{
		 if(a[i-1]<a[i])
		 a[i-1]=a[i];
	    }
		if(i==n-1&&count<k)
		{
			count++;
			n--;
			i=-1;
		}
	}
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	return 0;  
}
