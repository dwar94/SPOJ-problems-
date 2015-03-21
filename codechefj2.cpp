#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,x,y,res;
	scanf("%d",&t);
	while(t--)
	{
		res=0;
		scanf("%d%d",&x,&y);
		x=x<0?(-x):x;
		y=y<0?(-y):y;
	    if((x+y)%2==0)
	    {
	    	res=2*max(x,y);
	    }
	    else
	    {
	    	if((y-1)>0)
	    	  res=1+2*max(x,y-1);
	    	else  
	    	  res=1+2*max(x,1-y);
	    } 
		cout<<res<<endl;  
		
	}
	return 0;
	
}
