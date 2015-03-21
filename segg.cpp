#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int constructstutil(int arr[],int low,int high,int *st,int ind)
{
	if(low==high)
	{ 
	 st[ind]=arr[low];
	 return arr[low];
    }
    int mid=(low+high)/2;
    st[ind]=constructstutil(arr,low,mid,st,ind*2+1)+constructstutil(arr,mid+1,high,st,ind*2+2);
    return st[ind];
}
int *constructst(int arr[],int n)
{
	int x=(int)(ceil(log2(n)));
	int max=2*pow(2,x)-1;
	int *st=new int[max];
	constructstutil(arr,0,n-1,st,0);
	return st;
}
int query(int *st,int low,int high,int start,int end,int ind)
{
	if(start<=low&&end>=high)
	  return st[ind];
	if(high<start||low>end)
	  return 0;  
	int mid=(low+high)/2;
	return query(st,low,mid,start,end,2*ind+1)+query(st,mid+1,high,start,end,2*ind+2);  	
}
int main()
{
	int arr[]={1,3,5,7,9,11},a,b,c;
	int n=sizeof(arr)/sizeof(arr[0]);
	int *st=constructst(arr,n);
	cin>>c>>a>>b;
	if(c==0)
	 cout<<query(st,0,n-1,a,b,0);
	//else
	 //update(arr,st,n,a,b); 
	return 0;
}
