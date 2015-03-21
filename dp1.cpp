#include<stdio.h>
#include<iostream>
using namespace std;
int max(int a,int b)
{
	if(a>=b)
	 return a;
	else 
	 return b; 
}
int main()
{
	int t,i,j;
	scanf("%d",&t);
	int a[t],s[t];
	for(i=0;i<t;i++)
	 {
	 	scanf("%d",&a[i]);
	 	s[i]=1;
	 }
	for(i=1;i<t;i++) 
	for(j=0;j<i;j++)
	{
		if(a[i]>=a[j])
		{
		 if(s[i]<s[j]+1)
		   s[i]=s[j]+1;
	    }
	}
	for(i=0;i<t;i++)
	printf("%d ",s[i]);
}



