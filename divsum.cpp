#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	int t,n;
	long long int res;
	scanint(t);
	while(t--)
	{
	  scanint(n);
	  long long int res=1;
	  if(n==1)
	   printf("0\n");
	  else
	  { 
	  for(int i=2;i*i<=n;i++)
	  {
		if(n%i==0)
		{
			//cout<<"i:"<<i<<endl;
			if((n/i)!=i)
			res+=i+(n/i);
			else
			res+=i;
		}
	  }  
	   printf("%lld\n",res);
     }
	}
	
	return 0;
}

