#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int a[4]={0};
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
	   if(str[i]=='E')
	    a[0]++;
	   else if(str[i]=='N') 
	    a[1]++;
	   else if(str[i]=='S') 
	    a[2]++;
	   else
	    a[3]++; 
	}
	if(a[1]>=a[2])
	{
	   a[1]=a[1]-a[2];
	   a[2]=0;
	}
	else
	{
		a[2]=a[2]-a[1];
		a[1]=0;
	}
	if(a[0]>=a[3])
	{
	   a[0]=a[0]-a[3];
	   a[3]=0;
	}
	else
	{
		a[3]=a[3]-a[0];
	    a[0]=0;
	}
	for(int i=0;i<4;i++)
	{
		if(a[i]>0)
		{
			if(i==0)
			 for(int j=0;j<a[i];j++)
			   printf("E");
			else if(i==1)
			 for(int j=0;j<a[i];j++)
			   printf("N");
			else if(i==2)
			 for(int j=0;j<a[i];j++)
			   printf("S");
			else if(i==3)
			 for(int j=0;j<a[i];j++)
			   printf("W");         
		}
	}
	return 0;
}
