#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,2,2,4,3,5,2};
	int maj_ind=0,count=0;
	for(int i=0;i<8;i++)
	{
		if(a[maj_ind]==a[i])
		 count++;
		else
		 count--;
		if(count==0)  
		{
			maj_ind=i;
			count=1;
		}
	}
	cout<<a[maj_ind];
	
	return 0;
}
