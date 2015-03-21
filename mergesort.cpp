#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int *left,*right,lsize,rsize,i,j,k;
	lsize=mid-low+1;
	rsize=high-mid;
	left=(int *)malloc(sizeof(int)*lsize+1);
	right=(int *)malloc(sizeof(int)*rsize+1);
	for(i=0;i<lsize;i++)
	{
		left[i]=a[i+low];
	}
	left[i]=INT_MAX;
	for(i=0;i<rsize;i++)
	{
		right[i]=a[i+mid+1];
	}
	right[i]=INT_MAX;
	i=j=0;
	for(k=low;k<=high;)
	{
		if(left[i]<=right[j])
		{
			a[k++]=left[i++];
		}
		else
		{
			a[k++]=right[j++];
		}
	}
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{ 
	 mid=(low+high)/2;
	 mergesort(a,low,mid);
	 mergesort(a,mid+1,high);
	 merge(a,low,mid,high);
    } 
}
int main()
{
	int a[]={5,2,11,4,1,19,15,6,9,13};
	mergesort(a,0,10);
	for(int i=0;i<10;i++)
	  cout<<a[i]<<" ";
	return 0;  
}
