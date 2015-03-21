#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		vector<int> v;
		int j,cnt=-1;
		for(int i=0;i<a;i++)
		{
			v.push_back(0);
		}
		j=1;
		for(int i=0;j<=a;i=(i+1)%a)
		{
            if(v[i]==0)
			  cnt++;
			else if(cnt==j)
			 { 
			  v[i]=j;
			  j++;
			  cnt=-1;
		     }
		}
		for(int i=0;i<a;i++)
		 cout<<v[i]<<" ";
		cout<<endl; 
	}
	return 0;
}
