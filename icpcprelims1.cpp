#include<stdio.h>
#include<iostream>
#include<limits.h>
int main()
{
	 int t,i,n1,n2,m1,m2,j,k,l,p;
	 long long a=1000000;
	 scanf("%d",&t);
	 for(i=0;i<t;i++)
	 {
	 	scanf("%d%d%d%d",&n1,&m1,&n2,&m2);
	 	if(!(m1>m2))
	 	{
	 		j=n1;
	 		k=m1;
	 		l=m2;
	 		p=n2;
	 	}
		 else
		 {
		 	j=n2;
		 	k=m2;
		 	l=m1;
		 	p=n1;
	 	} 
	 	for(;j<a;j+=k)
	 	{
	 		if(j%l==p)
	 		 break;
	 	}
	 	if(j==a)
	 	 printf("-1");
	 	else
		 printf("%d",j); 
	 }
	 
}
