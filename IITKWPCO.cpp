#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],check[n],res=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			check[i]=0;
		}
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]%2==0||a[i]%2==1)
			{
				for(int j=0;j<n;j++)
				{
					if(((a[i]==2*a[j])||(a[i]==(2*a[j])+1))&&check[j]==0)
					{
						res++;
						check[i]=1;
						check[j]=1;
						break;
					}
				}
			}
		}
		printf("%d\n",res);
	}
	
	
	
	
	return 0;
}

