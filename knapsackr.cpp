#include<stdio.h>
#include<iostream>
using namespace std;
int max(int x,int y){return (x>y)?x:y;}
int knapsack(int n,int W,int *a,int *b)
{
	if(n==0||W==0)
		return 0;
	if(a[n-1]>W)
		return knapsack(n-1,W,a,b);
	else
		return max(b[n-1]+knapsack(n-1,W-a[n-1],a,b),knapsack(n-1,W,a,b));
}
int main()
{
	int s,n,*a,*b,i,res;
	scanf("%d%d",&s,&n);
	a=new int[n];
	b=new int[n];
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	res=knapsack(n,s,a,b);
	printf("%d\n",res);
	return 0;
}
