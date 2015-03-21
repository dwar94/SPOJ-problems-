#include<iostream>
using namespace std;
int main()
{
	int i,n,m,a[100][100],b,c,d,l=0,r=0;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>b>>c>>d;
		a[b][0]+=d;
		a[c][1]+=d;
	  
	} 
	
	for(i=1;i<=m+1;i++)
	{
	 if(a[i][1]!=0)
	 { 
	  l+=a[i][0];
	  r+=a[i][1];
      }
	}
	if(l>r)
	 cout<<(l-r);
	else
	 cout<<(r-l); 
	return 0;
}
