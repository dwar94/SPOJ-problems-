#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm.h>
using namespace std;
int main()
{
	int i,s,a,j;
	vector<int> v;
	cin>>s;
	for(i=0;i<s;i++)
	{ 
	 cin>>a;
	 v.push_back(a);
    }
    sort(v.begin(),v.end());
    a=v[0];
    for(i=1;i<v.size();i++)
    {
    	if(v[i]>=(2*a))
    	{
    		
    	}
    }
    
	return 0;
}
