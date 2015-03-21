#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<queue>
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
 int n,t;
 scanf("%d",&t)	;
 while(t--)
 {
 	scanf("%d",&n);
 	int res[n+1];
 	vector<int>::iterator it;
 	queue<int> que;
 	for(int i=1;i<=n;i++)
 	{
 		que.push(i);
 	}
 	int j=1;
 	while(que.empty()==false)
 	{
 		for(int i=0;i<j;i++)
 		{
 		  int temp=que.front();	
 	      que.pop();
		  que.push(temp);  		
 		}
 		res[que.front()]=j++;
 		que.pop();
 	}
 	for(it=res.begin();it!=res.end();it++)
 	{
 		printf("%d ",*it);
 	}
 	printf("\n");
 }
  return 0;
}


