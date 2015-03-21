#include<stdio.h>
#include<iostream>
using namespace std;
int recur(int a[],int sum,int k,int pos)
{
	//cout<<"sum:"<<sum<<endl;
	//cout<<"k:"<<k<<endl;
	//cout<<"pos:"<<pos<<endl;
	if(k==0&&sum==0)
	 return 1;
	else if(k==0&&sum!=0) 
	 return 0;
	else if(pos>6) 
	 return 0;
	else
	{ 
	 if(recur(a,sum-a[pos],k-1,pos+1))
	  return 1;
	 else if(recur(a,sum,k,pos+1))
	  return 1;  
    }
    return 0;
}
int main()
{
	int a[]={1,6,7,8,9,11};
	int sum=27;
	int k=4;
    cout<<recur(a,sum,k,0);
	
}
