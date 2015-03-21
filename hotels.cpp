#include<stdio.h>
#include<iostream>
#include<algorithm>
int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n],i,j,b[n];
	for(i=0;i<n;i++)
	 {
	  scanf("%d",&a[i]);
	  b[i]=0;
     }
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	 {
		 b[i]+=a[j];
		 if(a[i]>m)
		 {
		  b[i]-=a[j];
		  printf("%d\n",b[i]);
		  i++;
          break;
	     }
	 }  
	 std::cout<<*std::max_element(b,b+n)<<'\n';
	 return 0;
	
}

