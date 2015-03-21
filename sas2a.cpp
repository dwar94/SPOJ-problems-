#include <algorithm>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	int i,n,a,b,c,d;
	scanf("%d",&n);
	for(i=n+1;i<=9000;i++)
	{
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		c=n%10;
		n=n/10;
		d=n%10;
		 if(a!=b&&a!=c&&a!=d)
		  if(b!=c&&b!=d)
		   if(c!=d)
		 { 
		  printf("%d",i);
		  break;
	     }
	}
	return 0;
}

