#include<stdio.h>
#include<iostream>
using namespace std;
#define MAXN 3000000
int A[MAXN+1], p[MAXN/10], pc;
void sieve()
{
 for(int i=2; i<=10000000; i++){
	if(!A[i]){
		p[++pc] = i;
		A[i] = pc;
	}
	for(int j=1; j<=A[i] && i*p[j]<=10000000; j++)
	{	
		A[i*p[j]] = j;
}
}
}
int BS(int st, int fn, int val)
{
    int mid;
    while(st <= fn)
    {
        if(val < p[st]) return 0;
        if(val > p[fn]) return 0;
        mid = (st+fn) / 2;
        if(val == p[mid]) return 1;
        else if(val < p[mid]) fn = mid-1;
        else st = mid+1;
    }
}


int main()
{
	sieve();
	int t,n,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		p = BS(0,pc,n);
		if(p==1)
		 printf("YES\n");
		else
		 printf("NO\n"); 
	}
	return 0;
}

