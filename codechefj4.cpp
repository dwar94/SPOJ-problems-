#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
vector<int> cnt;
int gcd(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}
long long int lcm(int a,int b)
{
   int gc=gcd(a,b);
   a=a%1000000007;
   b=b%1000000007;
   //cout<<"a:"<<a<<" b:"<<b<<endl;
   long long int ret;
   ret=((long long)a*b)%1000000007;
   //cout<<"retbm="<<ret<<endl;
   gc=gc%1000000007;
   ret/=gc;
   //cout<<"ret="<<ret<<endl;
   return ret;
}
int main()
{
	int t,n,i,count,j,*a,*vis,res;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a=(int *)malloc(n*sizeof(int));
		vis=(int *)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			a[i]-=1;
			vis[i]=0;
		}
		i=0;
		count=0;
		while(true)
		{
		    if(vis[i]==0)	
			{ 
			    vis[i]=1;
				i=a[i];
			    count++;
		    }
		    else
		    {
		    	//cout<<count<<endl; 
		    	if(count>1)
				  cnt.push_back(count);
		    	count=0;
		    	for(j=0;j<n;j++) 
		    	{
		    		if(vis[j]==0)
		    		{  
					  i=j;
					  break;
				    }
		    	}
		    	if(j==n)
		    	 break;
		    } 
		}
		//for(i=0;i<cnt.size();i++)
		 //cout<<cnt[i]<<" "<<endl;  
		 //cnt.push_back(10000);
		 //cnt.push_back(9999);
		 //cnt.push_back(9998); 
	    if(cnt.size()==0)
	      res=0;
	    else if(cnt.size()==1)
	      res=cnt[0]; 
		else
		{
		 res=cnt[0]; 
		 for(int i=1;i<cnt.size();i++)
		 {
			res=lcm(res,cnt[i]);
		 }
	    }
		if(res==0) 
		 cout<<"1"<<endl;
		else
		 cout<<res<<endl; 
		cnt.clear(); 
	}
	return 0;
}
