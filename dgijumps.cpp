#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	int a[n][n];
	
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	{
		if(str[i]==str[j]&&i!=j)
		{ 
		 a[i][j]=1;
		 a[j][i]=1;
	    }
	    else
	     a[i][j]=0;
	} 
	a[0][1]=1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		 if(a[i][j]==1)
		 {
		 	a[i+1][j-1]=1;
		 	a[i+1][j+1]=1;
		 	for(int k=0;k<n;k++)
		 	  a[i+1][k]|=a[j][k];
		 }
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		  printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		if(a[i][n-1]==1)
		{
			printf("%d",i+1);
			break;
		} 
	}
	return 0;
}

