#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	
	char d;
	long long int v,i;
	int j;
	cin>>v;
	while(v!=-1)
	{
	   vector<int> c;	
	   while(v!=0)
       {
       	 i=v%2;
         c.push_back(i);	 
       	 v=v/2;
       }
    
        j=0;
        v=0;
       for(i=c.size()-1;i>=0;i--)
       {
	     v+=c[i]*pow(2,j);
       	 j++;
       }
       cout<<v<<endl;
       cin>>v;
	}
	return 0;
}
