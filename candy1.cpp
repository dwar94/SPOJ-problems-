#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,avg,res;
	scanf("%d",&n);
	while(n!=-1)
	{
		int a[n];
		avg=res=0;
		for(int i=0;i<n;i++)
		{
		 scanf("%d",&a[i]);
		 avg+=a[i];
	    }
	    if(avg%n!=0)
	      res=-1;
	    else
		{  
	     avg=avg/n;
	     for(int i=0;i<n;i++)
	     {
	    	if(a[i]<avg)
	    	  res+=avg-a[i];
	     }
	    }
	    printf("%d\n",res);
	    scanf("%d",&n);
	}
	
	
	
	return 0;
}

