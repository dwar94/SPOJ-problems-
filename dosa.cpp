#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<int> b;
	for(int i=0;i<n;i++)
	{ 
	 cin>>a[i];
	 if(a[i]-i>0)
	 {
		 b.push_back(a[i]-i);
	 }  
    }
    /*for(int i=0;i<b.size();i++)
     cout<<b[i]<<" ";
    cout<<endl; */
    int lis[b.size()],max=-1;
    lis[0]=1;
	for(int i=1;i<b.size();i++)
	{ 
	 lis[i]=1;
	 for(int j=0;j<i;j++)
	 {
	 	if(b[i]>b[j]&&lis[i]<lis[j]+1)
	 	{
	 		lis[i]=lis[j]+1;
	 	}
	 }
    }
    for(int i=0;i<b.size();i++)
    {
    	if(max<lis[i])
    	 max=lis[i];
    }
	cout<<n-max;
	
	return 0;
}
