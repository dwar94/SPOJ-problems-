#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m,a,b,k,l;
	cin>>n>>m>>i>>j>>a>>b;
	k=(n-i)/a;
	l=(m-j)/b;
	if(k<0)
	  k=-k;
	if(l<0)
	  l=-l;    
	if(k>l)
	{ 
	    if(j+(k*b)<m)
		 cout<<k;
		else
		 cout<<"Poor Inna and pony!";
    }
    else if(l>k)
    {
    	if(i+(l*a)<n)
    	 cout<<l;
    	else 
		 cout<<"Poor Inna and pony!"; 
    }
	else
	   cout<<l;
	return 0; 
}
