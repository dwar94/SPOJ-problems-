#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{ 
    int a[10],i,c[4]={0},res=0;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		c[a[i]%3]++;
	}
	res+=c[0]*(c[0]-1)/2;
	res+=c[1]*c[2];
	res+=(c[0]*(c[0]-1)*(c[0]-2))/6 ;
	res+=(c[1]*(c[1]-1)*(c[1]-2))/6;
	res+=(c[2]*(c[2]-1)*(c[2]-2))/6;
	res+=(c[0]*c[1]*c[2]);
	cout<<res;
	return 0;
}
