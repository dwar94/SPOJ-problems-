#include<stdio.h>
#include<iostream>
#include<cmath>
int main()
{
	 int te;
	 scanf("%d",&te);
	 for(int i=1;i<=te;i++)
	 {
	  int n0,n1,n2,t;
	  double t1,l;
	  scanf("%d",&n0);
	  scanf("%d",&n1);
	  scanf("%d",&t);
	  scanf("%d",&n2);
	  l=log((double)n1/n0)/t;
	  t1=log((double)n2/n0)/l;
	  printf("Scenario #%d: %.2f\n",i,t1);
     }
     return 0;
}
