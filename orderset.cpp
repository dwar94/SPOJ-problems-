#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
	map<int,int> m;
	
	vector<vector<int> > v1;
	int i,x,n;	
	cin>>n;
	int a[n];
	char c[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		cin>>a[i];
		vector<int> v;
		if((m[a[i]]==0)&&((c[i]!='K')||(c[i]!='C')))
		 {  
		   m[a[i]]=1;
		   
		   v.push_back(a[i]);
		   v.push_back(i);
		   v1.push_back(v);
	     }
	}
	sort(v1.begin(),v1.end());
	for(i=0;i<v1.size();i++)
	  cout<<v1[i][0]<<","<<v1[i][1]<<"\n";
	return 0;
}

