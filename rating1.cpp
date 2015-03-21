#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int smin(int a,int b)
{
	if(a<b)
	  return a;
	return b;
}
int main()
{
	map<int,int> m1,m2,m3;
	vector<int> a,b;
	int x,y,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		m1[x]=i;
		m2[y]=i;
		a.push_back(x);
		b.push_back(y);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i=0;i<a.size();i++)
	{
	    a[i]=m1[a[i]];
		b[i]=m2[b[i]];
	    m3[b[i]]=i;
	    //m4[a[i]]=i;
	    //cout<<a[i]<<" "<<b[i]<<"\n";
	}
	for(int i=0;i<a.size();i++)
	{
		int cnt=0;
		for(int j=0;j<i;j++)
		{
           if(m3[a[j]]>m3[a[i]])
		     cnt++;
	     }
		  // cout<<i<<"  "<<cnt<<"\n";
		   b[a[i]]=smin(i,m3[a[i]])-cnt;
		   if(b[a[i]]<0)
		     b[a[i]]=0;
		   
		}
    for(int j=0;j<b.size();j++)
	   cout<<b[j]<<endl;
	  
	return 0;
}
