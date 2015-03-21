#include<iostream>
#include<stdio.h>
#include<list>
using namespace std;
int main()
{
	list<int> l;
	list<int>::iterator it,it1;
	int i,k;
	for(i=2;i<33850;i++)
	 l.push_back(i);
	 int t=0,ans[3001];
	 while(!l.empty()&&t<3000)
	  {
	  	ans[t]=l.front();
	  	++t;
	  	k=l.front();i=0;
	  	for(it=l.begin();it!=l.end();it=it1,++i)
	  	{
	  		it1=it;
	  		++it1;
	  		if(i%k==0)l.erase(it);
	  	}
	  }
	  cin>>t;
	  while(t!=0)
	  {
	  	cout<<ans[t-1]<<endl;
	  	cin>>t;
	  }
	  return 0;
}
