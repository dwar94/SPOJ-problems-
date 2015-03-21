#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
long long int min(int a,long long int b)
{
	if(a<b)
	 return a;
	else  
	 return b; 
}
int main()
{
	int t,n;
	long long int sum,rt;
	bool flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=false;
		sum=0;
		rt=0;
		scanf("%d",&n);
		int a[n+1];
		long long lt[n+1];
		lt[0]=0;
		a[0]=0;
		for(int i=n;i>=1;i--)
		{
		  scanf("%d",&a[i]);
		  sum+=a[i];
		}
		if(sum%2==0)
		{
		 for(int i=1;i<=n;i++)
		 {
			lt[i]=lt[i-1]+a[i];
			//cout<<lt[i]<<" ";
		 }
		 //cout<<endl;
		 for(int i=1;i<=n;i++)
		 {
			rt=0;
			for(int j=i+1;j<=n;j++)
			{
			  //cout<<"a value:"<<a[j]<<":"<<i<<endl;	
			  rt+=min(i,a[j]);	
			}
			//cout<<"rtvalue:"<<rt<<":"<<i<<endl;
			if(lt[i]>(i*(i-1)+rt))
			{
				flag=true;
				break;
			} 
		 }
	    }
		if(flag)
		 printf("SAD\n");
		else
		 printf("HAPPY\n"); 
	}
	
	
	return 0;
}
