#include<iostream>
#include<stdio.h>
#include<vector>
using  namespace std;
int main()
{
	vector<int> v;
	int n,a,i,j,leftg,rightg=0,prod=-1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	leftg=v[0];
	for(i=1;i<v.size()-1;i++)
	{
		if(v[i]<leftg)
		   continue;
		   
		if(v[i]>rightg)
		{
			for(j=i+1;j<n;j++)
			  if(v[j]>rightg)
			    rightg=v[j];
		}
		else if(v[i]==rightg)
		{
			rightg=v[i+1];
			for(j=i+1;j<n;j++)
			  if(v[j]>rightg)
			    rightg=v[j];
		}
		if(prod<leftg*v[i]*rightg)
		{ 
		  prod=leftg*v[i]*rightg;   
		  if(i!=v.size()-2&&v[i]<rightg)
		  leftg=v[i];
     	}
	}
	cout<<leftg<<v[i-1]<<rightg;
	return 0;
}
