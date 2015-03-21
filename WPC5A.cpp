#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int t,n,count=1;
	long long int p;
	scanf("%d",&t);
	while(t--)
	{
		count=1;
		scanf("%d",&n);
		if(n!=1)
	    {	
		 p=pow(n,2);
		 for(int i=3;i<n;i=i+2)
		 {
			if(p%i==0)
			 count++;
		 }
		 printf("%d\n",count);
	    }
	    else
	     printf("0\n");
	}
	
	
	
	return 0;
}

