#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,i,a,b,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		int flag=0,sum=0;
		vector<int> v,s;
		for(j=0;j<a;j++)
		{
			cin>>b;
			sum+=b;
			v.push_back(b);
		}
		if(sum%2==0)
		{
			s[0]=0;
			for(j=1;j<a;j++)
			 s[j]=s[j-1]+a[j-1];
			for(j=1;j<=a;j++) 
		}
		while(a>0)	
	    {
	    	if(v[j]>0)
	    	{
	    		v[j]--;
	    		a--;
	    	}
	    	j++;
	    }
        for(k=0;k<v.size();k++)
                 {
                 	cout<<v[k]<<" ";
                  if(v[k]!=0){
                 	cout<<"SAD"<<"\n";
                 	flag=1;
                 	//break;
                 }}	
                 if(flag==0)
                   cout<<"HAPPY"<<"\n";
	} 
	return 0;
}
