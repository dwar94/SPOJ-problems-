#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n,temp,count1=0,count3=0,count2=0;
	scanf("%d",&t);
	vector<int> v;
	while(t--)
	{
		count1=count2=count3=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			if(temp==1)
			 count1++;
			else if(temp==2) 
			 count2++;
			else if(temp==3) 
			 count3++;
			else
			 v.push_back(temp); 
		}
		sort(v.begin(),v.end());
		for(int i=0;i<count1;i++)
		{
			//cout<<"1 ";
			printf("1 ");
		}
		if(count3==1&&count2==1&&v.size()==0)
		 printf("2 3");
		 //cout<<"2 3\n";
		else
		{
			if(count3==1&&count2>1&&v.size()==0)
			{
				for(int i=0;i<count2-1;i++)
				 printf("2 ");
				 //cout<<"2 ";
				//cout<<"3 2";
				printf("3 2");
			}
			else
			{
				for(int i=v.size()-1;i>=0;i--)
				 printf("%d ",v[i]);
				 //cout<<v[i]<<" ";
				for(int i=0;i<count3;i++)
				 printf("3 ");
				 //cout<<"3 " ;
				for(int i=0;i<count2;i++) 
				 printf("2 ");
				 //cout<<"2 ";
			}
		} 
		printf("\n");
		v.clear();
		
	}
	
	
	
	
	
	return 0;
}
