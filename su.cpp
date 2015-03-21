#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int n,k,a,b;
  vector<int> v,cnt;
  cin>>n>>k;
  for(int i=0;i<=n;i++)
    v.push_back(0);
  for(int i=0;i<k;i++)
  {
  	cin>>a>>b;
  	v[a]+=1;
  	v[b]-=1;
  }
  a=0;
   for(int i=1;i<=n;i++)
   {
   	  a+=v[i];
   	  cnt.push_back(a);
   }
   sort(cnt.begin(),cnt.end());
   cout<<cnt[(cnt.size()/2)+1];
   return 0;
	  
}
