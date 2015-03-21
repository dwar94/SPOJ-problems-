#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t,ng,mg,temp;
	scanf("%d",&t);
	vector<int> v,v1;
	while(t--)
	{
		scanf("%d%d",&ng,&mg);
		for(int i=0;i<ng;i++)
		{
		  scanf("%d",&temp);
		  v.push_back(temp);
	    }
	    for(int i=0;i<mg;i++)
		{
		  scanf("%d",&temp);
		  v1.push_back(temp);
	    }
	    sort(v.begin(),v.end());
	    sort(v1.begin(),v1.end());
        int it1=0,it2=0;
	    while(ng!=0&&mg!=0)
	    {
	    	if(v[it1]>=v1[it2])
	    	 {
	    	 	mg--;
	    	 	it2++;
	    	 }
			 else
			 {
			 	ng--;
			 	it1++;
			 } 
	    }
	    if(ng==0)
	      printf("MechaGodzilla\n");
	    else
		  printf("Godzilla\n");  
		v.clear();
		v1.clear();  
	}
	
	
	return 0;
}
