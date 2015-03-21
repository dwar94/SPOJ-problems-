#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    int T,n,l,x,y,p,q,f,count;
    vector<string> v1;
    vector<string> v2;
    string temp;
    cin>>T;
    for(int i=0;i<T;i++)
    {
    	f=0;
    	x=0;
    	y=0;
    	p=0;
    	q=0;
    	count=0;
    	cin>>n>>l;
    	for(int j=0;j<n;j++)
    	{
    		cin>>temp;
    		v1.push_back(temp);
    	}
    	for(int j=0;j<n;j++)
    	{
    		cin>>temp;
    		v2.push_back(temp);
    	}
    	cout<<"Case #"<<i+1<<": ";
    	for(int k=l-1;k>=0;k--)
    	{
    		for(int j=0;j<v1.size();j++)
    		{
    		   x^=int(v1[j][k]-'0');
			   y^=int(v2[j][k]-'0');
			   p&=int(v1[j][k]-'0');
			   q&=int(v2[j][k]-'0');
    		}
    		cout<<x<<":"<<y<<endl;
    		if((v1.size()%2)==0&&(x!=y))
    		{
    			cout<<"Not Possible\n";
    			f=1;
    			break;
    		}
    		else if((v1.size()%2)!=0&&(x==y))
    		{
    			cout<<"Not Possible\n";
    			f=1;
    			break;
    		}
    		else
    		{
    		 	if(x!=y&&(v1.size()%2!=0))
    		 	 count++;
    		 	else if(v1.size()%2==0&&(p!=q))
				 {
				 	count++;
				 } 
				 x=0;
				 y=0;
    		}
    	}
    	if(f==0)
    	 cout<<count<<endl;
    }

	return 0;
}

