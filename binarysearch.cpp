#include<iostream>
#include<stdio.h>
using namespace std;
int binarysearch(int a[],int low,int high,int data)
{
   if(low==high&&a[low]!=data)
     return -1;  
   int mid=(low+high)/2;
   if(a[mid]>data)
    return binarysearch(a,low,mid,data);
   else if(a[mid]<data)
    return binarysearch(a,mid+1,high,data);
   else 
    return mid;
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8};
	cout<<binarysearch(a,0,8,6);
	
	return 0;
}
