#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define gc getchar_unlocked
using namespace std;
/*void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}*/
int main()
{
	int t;
	long long int res,n;
	//scanint(t);
	scanf("%d",&t);
	while(t--)
	{
		
		//scanint(n);
		scanf("%d",&n);
		res = (n*n)/12 + ((n*n)%12>=6) - ((long long)floor(n/4.0))*((long long)floor((n+2)/4.0));
		printf("%lld\n",res);
	}
	
	
	return 0;
}


