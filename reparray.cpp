#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int min(int a,int b)
{
	if(a<b)
	  return a;
	else
	  return b;  
}
int trim(int l,int h)
{
  if((2*v[l])<v[h])
  {
   
   return min(trim(l+1,h),trim(l,h-1))+1;
   
  }	
  else
    return 0;
}
int main()
{
	int t;
	cout<<"Enter no.of test cases:";
	cin>>t;
	while(t--)
	{
	int n,temp,rep;
	cout<<"Enter the no.of elements of array:";
	cin>>n;
	cout<<"Enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	rep=trim(0,v.size()-1);
	cout<<rep;
	v.clear();
    }
	return 0;
}
