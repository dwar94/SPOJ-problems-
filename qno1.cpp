#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,i,n,j,max;
	scanf("%d",&t);
	while(t--)
	{
		 scanf("%d",&n);
		 int a[n],b[n];
		 for(i=0;i<n;i++)
		 {
		 	scanf("%d",&a[i]);
		 	b[i]=a[i];
		 }
		 for(i=1;i<n;i++)
		  for(j=0;j<i;j++)
		  {
		  	if((b[j]^a[i])>=b[i])
		  	 b[i]=b[j]^a[i];
		  }
		 max=b[0];
		 for(i=1;i<n;i++) 
		 { 
		  if(b[i]>max)
		   max=b[i];
	     } 
	     printf("%d\n",max);
	}
	return 0;
}
