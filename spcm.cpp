#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;
//map<int,int> m;
long long int primefact(long long int n) 
{
	    cout<<"n:"<<n<<endl;
	    long long int cnt=0,sum=0;
	    if(n==2)
	      return 1;
	      
	    else if(n%2==0)
		{
			sum+=2;
			while(n%2==0)
			{
				n/=2;
			}
			cnt++;
		}
		cout<<"n:"<<n<<endl;
		cout<<"count:"<<cnt<<endl;
		for(int i=3;i*i<=n;i+=2)
		{
		   if(n%i==0)	
		   {
			 sum+=i;
		   	 cnt++;
		   } 
		   while(n%i!=0)   		   	
		   	 n=n/i;
		}
		if(n>2)
		{   
		   sum+=n;
		   cnt++;
	    }
	    cout<<"count:"<<cnt<<endl;
		return primefact(sum)+cnt;
		
}
int main()
{
	int t;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",primefact(n));
	}
	return 0;
}
