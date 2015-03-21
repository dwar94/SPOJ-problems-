#include<iostream>
#include<stdio.h>
using namespace std;
int add(int a,int b)
{
	int c,r;
	c=(a&b)<<1;
	r=a^b;
	if(r&c)
	 r=add(r,c);
	else
	 r=r^c; 
	return r; 
}
int sub(int a,int b)
{
	int r;
	r=add(a,add(~b,1));
	return r;
}
int mul(int a,int b)
{
	int r=0;
	while(b!=0)
	{
		if((b&1)!=0)
			r=add(r,a);
	    a=a<<1;
	    b=b>>1;
    }
    return r;
}
int main()
{
	int a,b,r,r1,r2;
	cin>>a>>b;
	r=add(a,b);
	r1=sub(a,b);
	r2=mul(a,b);
	cout<<r<<endl;
	cout<<r1;
	cout<<r2;
	return 0;
}
