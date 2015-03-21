#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		if(n%2!=0)
		 printf("%d\n",n);
		else
		 {
		 	int res=0;
		 	while(n!=0)
		 	{
		 		res=2*res;
		 		res+=n%2;
		 		n/=2;
		 	}
		 	printf("%d\n",res);
		 } 	
	}
	
	
	
	return 0;
}


