#include<iostream>
using namespace std;
int main()
{
	int cnt=0;
	long long w,m,k,i,t=9;
	cin>>w>>m>>k;
	i=m;
	while(i!=0)
	{
		i=i/10;
		cnt++;
	}
	for(i=2;i<cnt;i++)
	{
		t=(t*10)+9;
	}
	return 0;
}
