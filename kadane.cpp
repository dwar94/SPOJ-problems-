#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[]={-2,-3,4,-1,-2,1,5,-3};
	int start=0,end=0;
	for(int i=0;i<8;i++)
	{
	  end=end+a[i];
	  if(end<0)
	   end=0;
	  else if(start<end)
	   start=end; 
    }
    cout<<start;
}
