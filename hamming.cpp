#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> v;
 int t,i,j,r;
 long long int b;
 scanf("%d",&t);
 while(t--)
 { 
  cin>>b;
  v.push_back(2);
  for(i=1;b!=0;i++)
  {
    r=b%10;
    if((i&(i-1))!=0)
	{ 
	 v.push_back(r);
	 b=b/10;
	} 
    else
     v.push_back(0);
  }	 
  for(i=1;i<v.size();i=i*2)
  {
   for(j=i+1;j<v.size();j++)
    if((i&j)==i)
	 v[i]^=v[j];
  }
  for(i=v.size()-1;i>0;i--)
   printf("%d",v[i]);
  printf("\n");   
   v.clear();   
 }
} 
