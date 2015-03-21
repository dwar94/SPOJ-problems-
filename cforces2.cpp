#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>
#include<limits.h>
using namespace std;
int main()
{
	vector<int> v;
	map<int,int> m;
	map<int,int> :: iterator it;
	int n,i,x,j,k,count=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		v.push_back(j);
		m[j]++;
	}
	i=0;
	for(it=m.begin();it!=m.end();it++)
	{
	  i++;	
	}
	printf("%d\n",i);
	for(i=0;i<n;i++)
	{
	 if(v[i]!=INT_MIN)
	  {
		if(m[v[i]]==1)
		 printf("%d 0\n",v[i]);
		else
		 {
		 	for(j=i+1;j<n;j++)
		 	{
		 		if(v[i]==v[j])
		 		  break;
		 	}
		 	j=j-i;
		 	if(m[v[i]]>=2)
		 	{
		 	  for(k=i+j;k<n;k=k+j)
			  {
			  	if(v[k]==v[i])
			  	 count++;
			  }
			  if(count==m[v[i]])
			   printf("%d %d\n",v[i],j);
			  for(k=i+j;count>1;k=k+j)
			   {
			    v[k]=INT_MIN; 
			    count--;
		       }
			  count=1; 	
		 	}
		 	else
		 	{
		 		printf("%d %d\n",v[i],j);
		 	}
		 	
		  }
        }
	}
	return 0;
}
	
	
