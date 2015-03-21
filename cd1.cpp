#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int k,i,j;
	char a[4];
	int count[10]={0};
	cin>>k;
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	 {
	 	cin>>a[j];
	    if(a[j]!='.')
	    {
	    	count[(a[j]-48)]++;
	    }
	 }
	for(i=0;i<10;i++)
	{
		if(count[i]>(2*k))
		{ 
		 printf("NO");
		 j=12;
		 break;
	    }
	}  
	if(j!=12)
	  printf("YES");
    return 0;
}
