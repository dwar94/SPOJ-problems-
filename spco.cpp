#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
# define MAX 70
vector<bool> prime(MAX,true);
unsigned long long int countSetBits(unsigned long long int n)
{
    unsigned long long int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
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
	int t;
	unsigned long long a,b,temp,cnt;
	sieve();
	scanf("%d",&t);
	while(t--)
	{
		cnt=0;
		cin>>a>>b;
		for(unsigned long long int i=a;i<=b;i++)
		{
			temp=countSetBits(i);
			if(prime[temp])
			   cnt++;
		}
		cout<<cnt<<endl;
		
	}
	return 0;
}
