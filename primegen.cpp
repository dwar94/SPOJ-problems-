using namespace std;
#include <iostream>
#include <cstdio>
#include <vector>
#include <math.h>
# define MAX 63
vector<bool> prime(MAX,true);
void sieve()
{
     int i,j,p;
     prime[1]=false;
     for(i=3;(i*i)<MAX;i+=2)
     {
          if(!prime[i]) 
		   continue;
          for(j=i*i;j<MAX;j+=(i<<1))
           prime[j]=false;
     }
}
int main()
{
	unsigned long long t,n,temp,i;
	int flag=0;
	scanf("%d",&t);
	sieve();
	while(t--)
	{
	  cin>>n;
	  temp=log(n)/log(2);
	  flag=0;
	  for(i=temp;i>=2;i--)
	  {
	  	if(prime[i])
	  	{
	  		int x=pow(n,1/(float)i);
	  		if(n==pow(x,i))
	  		{
	     		cout<<"YES"<<endl;
	     		flag=1;
	     		break;
	     	}
	  	}
	  
	  }
	  	if(flag==0)
	  		cout<<"NO"<<endl;
	}
	
}
