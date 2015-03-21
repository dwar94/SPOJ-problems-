#include<stdio.h>
#include<queue>
#include<iostream>
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
	int t,n,temp;
	long long res;
	bool flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=false;
		res=0;
		scanf("%d",&n);
		queue<long long int> bfs;
		bfs.push(1);
		while(!bfs.empty())
		{
			res=bfs.front();
			bfs.pop();
			if(res%n==0)
			{
				flag=true;
				break;
			}
			else 
			{
				bfs.push(res*10);
				bfs.push(res*10+1);
			} 
		}
		if(flag)
		 printf("%d\n",res);
	}
}
