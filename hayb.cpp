#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v,cnt;
void update(int a,int b)
{
  	v[a]+=5;
  	v[b]-=5;
}
 void query(int a,int b)
 {
   int t=0;
   for(int i=a;i<=b;i++)
   {
   	  t+=v[i];
   	  cout<<t<<" ";
   }
}
int main()
{
  int n,k,a,b;
  cin>>n;
  for(int i=0;i<1000;i++)
    v.push_back(1);
  while(n--)
  {
  	cin>>k>>a>>b;
  	if(k==0)
  	 query(a,b);
  	update(a,b);
  }
  return 0;
   
   return 0;
	  
}

