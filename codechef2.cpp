#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}
int main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		long long int neven,meven,num,den,gd;
		scanf("%d",&n);
		scanf("%d",&m);
		neven=n/2;
		cout<<neven<<endl;
		meven=m/2;
		cout<<meven<<endl;
    	num=neven*(m-meven)+meven*(n-neven);
		cout<<num<<endl;
		gd=gcd(n,num);
		cout<<gd<<endl;
		num/=gd;
		n/=gd;
		gd=gcd(num,m);
		num/=gd;
		m/=gd;
        cout<<num<<endl;		
		//cout<<gd<<endl;
		//den/=gd;
		//num/=gd;
		printf("%lld/%lld\n",num,n*m);
	}
	return 0;
}


